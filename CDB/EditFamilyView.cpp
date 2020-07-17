#include "EditFamilyView.h"
#include "ui_EditFamilyView.h"
#include "QMessageBox"
#include "QDebug"

EditFamilyView::EditFamilyView(int family_id,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditFamilyView)
{
    ui->setupUi(this);

    m_pPerson = Person::getInstance();
    m_pFamily = Family::getInstance();

    getAllPersons();

    m_family = m_pFamily->get(family_id);

    if(m_family.fatherId != -1 &&
            m_family.fatherId != 0)
    {
        m_pPerson->get(&m_father,m_family.fatherId);

        m_pPerson->get(&m_mother,m_family.motherId);

        tPerson temp;

        if(m_family.addedChildrenList.length() > 0)
        {
            for(auto child_id : m_family.addedChildrenList)
            {
                m_pPerson->get(&temp,child_id);

                m_addedChildList.append(temp);
            }

            updateAddedChildrenList(ui->comboBox_toDeleteChildName_3);
        }
        updatePossibleChildrenList(ui->comboBox_toAddChildName_3);

        if(m_family.addedResidentList.length() > 0)
        {
            for(auto resident_id : m_family.addedResidentList)
            {
                m_pPerson->get(&temp,resident_id.first);

                m_addedResidentList.append(qMakePair(temp,resident_id.second));
            }

            updateAddedResidentList(ui->comboBox_toDeleteResidentName_3);
        }
        updatePossibleResidentList(ui->comboBox_toAddResidentName_3);

        QRegularExpression number_reg_expr("([0-9]+)");

        ui->lineEdit_flatNo_3->setValidator(new QRegularExpressionValidator(number_reg_expr,this));
        ui->lineEdit_blockNo_3->setValidator(new QRegularExpressionValidator(number_reg_expr,this));
        ui->lineEdit_buildingNo_3->setValidator(new QRegularExpressionValidator(number_reg_expr,this));
        ui->lineEdit_entranceNo_3->setValidator(new QRegularExpressionValidator(number_reg_expr,this));
        ui->lineEdit_neighbourhoodNo_3->setValidator(new QRegularExpressionValidator(number_reg_expr,this));

        QRegularExpression name("([ئءؤلألاآأ-ي]+[ ]){4}([ئءؤلألاآأ-ي]+){1}");

        ui->comboBox_toAddChildName_3->setValidator(new QRegularExpressionValidator(name,this));
        ui->comboBox_toAddResidentName_3->setValidator(new QRegularExpressionValidator(name,this));
        ui->comboBox_toDeleteChildName_3->setValidator(new QRegularExpressionValidator(name,this));
        ui->comboBox_toDeleteResidentName_3->setValidator(new QRegularExpressionValidator(name,this));

        ui->lineEdit_fatherName->setText(m_father.name);
        ui->lineEdit_motherName->setText(m_mother.name);

        ui->lineEdit_blockNo_3->setText(m_family.blockNo);
        ui->lineEdit_buildingNo_3->setText(m_family.buildingNo);
        ui->lineEdit_neighbourhoodNo_3->setText(m_family.neighbourhoodNo);
        ui->lineEdit_residenceType_3->setText(m_family.resiedenceType);
        ui->lineEdit_flatNo_3->setText(m_family.flatNo);
        ui->lineEdit_entranceNo_3->setText(m_family.entranceNo);

        ui->textEdit_note_3->setText(m_family.note);
    }

    connect( this, SIGNAL(updateSignal()), parentWidget(), SLOT(updateSlot()) );
}

EditFamilyView::~EditFamilyView()
{
    delete ui;
}

void EditFamilyView::on_pushButton_mainWinReturn_4_clicked()
{
    this->hide();
}


void EditFamilyView::on_pushButton_addChild_3_clicked()
{
    addChildPressedHandler(ui->comboBox_toAddChildName_3,
                           ui->comboBox_toDeleteChildName_3,
                           ui->comboBox_toAddResidentName_3,
                           ui->comboBox_toDeleteResidentName_3);
}

void EditFamilyView::on_pushButton_deleteChild_3_clicked()
{
    deleteChildPressedHandler(ui->comboBox_toAddChildName_3,
                           ui->comboBox_toDeleteChildName_3,
                           ui->comboBox_toAddResidentName_3,
                           ui->comboBox_toDeleteResidentName_3);
}

void EditFamilyView::on_pushButton_addResident_3_clicked()
{
    addResidentPressedHandler(ui->comboBox_toAddChildName_3,
                           ui->comboBox_toDeleteChildName_3,
                           ui->comboBox_toAddResidentName_3,
                           ui->comboBox_toDeleteResidentName_3,
                              ui->lineEdit_residentRelation_3);
}

void EditFamilyView::on_pushButton_deleteResident_3_clicked()
{
    deleteResidentPressedHandler(ui->comboBox_toAddChildName_3,
                           ui->comboBox_toDeleteChildName_3,
                           ui->comboBox_toAddResidentName_3,
                           ui->comboBox_toDeleteResidentName_3);
}


void EditFamilyView::on_pushButton_applyFamilyEdit_clicked()
{
    m_family.flatNo = ui->lineEdit_flatNo_3->text();
    m_family.blockNo = ui->lineEdit_blockNo_3->text();
    m_family.buildingNo = ui->lineEdit_buildingNo_3->text();
    m_family.entranceNo = ui->lineEdit_entranceNo_3->text();
    m_family.neighbourhoodNo = ui->lineEdit_neighbourhoodNo_3->text();

    if(m_family.flatNo != "" &&
            m_family.blockNo != "" &&
            m_family.buildingNo != "" &&
            m_family.entranceNo != "" &&
            m_family.neighbourhoodNo != "")
    {
        m_family.resiedenceType = ui->lineEdit_residenceType_3->text();
        m_family.note = ui->textEdit_note_3->toPlainText();

        m_pFamily->removeAllChildren(m_family.id);
        m_pFamily->removeAllResidents(m_family.id);

        m_family.addedChildrenList.clear();
        if(m_addedChildList.size() > 0)
        {
            for(auto child : m_addedChildList)
            {
                m_family.addedChildrenList.append(child.id);
            }
        }

        m_family.addedResidentList.clear();
        if(m_addedResidentList.size() > 0)
        {
            for(auto resident : m_addedResidentList)
            {
                m_family.addedResidentList.append(qMakePair(resident.first.id,resident.second));
            }
        }

        if(m_pFamily->update(&m_family) == true)
        {
            QMessageBox::information(this," ",tr("تم!"));

            this->updateSignal();
            this->hide();
        }
        else
        {
            QMessageBox::critical(this," ",tr("هناك خطأ ما!"));
        }
    }
    else
    {
        QMessageBox::critical(this," ",tr("هناك خطأ ما فالمدخلات"));
    }
}
