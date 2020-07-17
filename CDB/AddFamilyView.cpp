#include "AddFamilyView.h"
#include "ui_AddFamilyView.h"
#include "QMessageBox"

AddFamilyView::AddFamilyView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddFamilyView)
{
    ui->setupUi(this);

    m_pPerson = Person::getInstance();
    m_pFamily = Family::getInstance();

    getAllPersons();

    updatePossibleFathersList();
    updatePossibleMothersList();

    m_fatherSelected = false;
    m_motherSelected = false;

     QRegularExpression number_reg_expr("([0-9]+)");

     ui->lineEdit_flatNo->setValidator(new QRegularExpressionValidator(number_reg_expr,this));
     ui->lineEdit_blockNo->setValidator(new QRegularExpressionValidator(number_reg_expr,this));
     ui->lineEdit_buildingNo->setValidator(new QRegularExpressionValidator(number_reg_expr,this));
     ui->lineEdit_entranceNo->setValidator(new QRegularExpressionValidator(number_reg_expr,this));
     ui->lineEdit_neighbourhoodNo->setValidator(new QRegularExpressionValidator(number_reg_expr,this));

     QRegularExpression name("([ئءؤلألاآأ-ي]+[ ]){4}([ئءؤلألاآأ-ي]+){1}");

     ui->comboBox_fatherName->setValidator(new QRegularExpressionValidator(name,this));
     ui->comboBox_motherName->setValidator(new QRegularExpressionValidator(name,this));
     ui->comboBox_toAddChildName->setValidator(new QRegularExpressionValidator(name,this));
     ui->comboBox_toAddResidentName->setValidator(new QRegularExpressionValidator(name,this));
     ui->comboBox_toDeleteChildName->setValidator(new QRegularExpressionValidator(name,this));
     ui->comboBox_toDeleteResidentName->setValidator(new QRegularExpressionValidator(name,this));

    ui->comboBox_toAddChildName->setEnabled(false);
    ui->comboBox_toAddResidentName->setEnabled(false);
    ui->lineEdit_residentRelation->setEnabled(false);
    ui->comboBox_toDeleteChildName->setEnabled(false);
    ui->comboBox_toDeleteResidentName->setEnabled(false);
    ui->pushButton_addChild->setEnabled(false);
    ui->pushButton_deleteChild->setEnabled(false);
    ui->pushButton_addResident->setEnabled(false);
    ui->pushButton_deleteResident->setEnabled(false);

    connect( this, SIGNAL(updateSignal()), parentWidget(), SLOT(updateSlot()));
}

AddFamilyView::~AddFamilyView()
{
    delete ui;
}

void AddFamilyView::updatePossibleFathersList()
{
    int selected_idx = -1;

    m_possibleFatherList.clear();
    ui->comboBox_fatherName->clear();

    int i = 0;

    for(auto person : m_persons)
    {
        if(person.first.gender == Person::GENDER_MALE &&
                m_pFamily->isParent(person.first.id) == false &&
                (person.second == false || person.first == m_father))
        {
           ui->comboBox_fatherName->addItem(person.first.name);

           m_possibleFatherList.append(person.first);

           if(person.first == m_father)
           {
               selected_idx = m_possibleFatherList.size() - 1;
           }
        }

        i++;
    }

    ui->comboBox_fatherName->setCurrentIndex(selected_idx);
}

void AddFamilyView::updatePossibleMothersList()
{
    int selected_idx = -1;

    m_possibleMotherList.clear();
    ui->comboBox_motherName->clear();

    int i = 0;

    for(auto person : m_persons)
    {
        if(person.first.gender == Person::GENDER_FEMALE &&
                m_pFamily->isParent(person.first.id) == false &&
                (person.second == false || person.first == m_mother))
        {
           ui->comboBox_motherName->addItem(person.first.name);

           m_possibleMotherList.append(person.first);

           if(person.first == m_mother)
           {
               selected_idx = m_possibleMotherList.size() - 1;
           }
        }

        i++;
    }

    ui->comboBox_motherName->setCurrentIndex(selected_idx);
}

void AddFamilyView::on_pushButton_mainWinReturn_2_clicked()
{
    this->updateSignal();
    this->destroy();
}

void AddFamilyView::on_pushButton_addChild_clicked()
{
    addChildPressedHandler(ui->comboBox_toAddChildName,
                           ui->comboBox_toDeleteChildName,
                           ui->comboBox_toAddResidentName,
                           ui->comboBox_toDeleteResidentName);
}

void AddFamilyView::on_pushButton_deleteChild_clicked()
{
    deleteChildPressedHandler(ui->comboBox_toAddChildName,
                           ui->comboBox_toDeleteChildName,
                           ui->comboBox_toAddResidentName,
                           ui->comboBox_toDeleteResidentName);
}

void AddFamilyView::on_pushButton_addResident_clicked()
{
    addResidentPressedHandler(ui->comboBox_toAddChildName,
                           ui->comboBox_toDeleteChildName,
                           ui->comboBox_toAddResidentName,
                           ui->comboBox_toDeleteResidentName,
                              ui->lineEdit_residentRelation);
}

void AddFamilyView::on_pushButton_deleteResident_clicked()
{
    deleteResidentPressedHandler(ui->comboBox_toAddChildName,
                           ui->comboBox_toDeleteChildName,
                           ui->comboBox_toAddResidentName,
                           ui->comboBox_toDeleteResidentName);
}

void AddFamilyView::on_pushButton_addFamily_clicked()
{
    if(m_fatherSelected == true &&
            m_motherSelected == true &&
            m_father.name == ui->comboBox_fatherName->currentText() &&
            m_mother.name == ui->comboBox_motherName->currentText())
    {
        m_family.fatherId = m_father.id;
        m_family.motherId = m_mother.id;
        m_family.flatNo = ui->lineEdit_flatNo->text();
        m_family.blockNo = ui->lineEdit_blockNo->text();
        m_family.buildingNo = ui->lineEdit_buildingNo->text();
        m_family.entranceNo = ui->lineEdit_entranceNo->text();
        m_family.neighbourhoodNo = ui->lineEdit_neighbourhoodNo->text();

        if(m_family.flatNo != "" &&
                m_family.blockNo != "" &&
                m_family.buildingNo != "" &&
                m_family.entranceNo != "" &&
                m_family.neighbourhoodNo != "")
        {
            m_family.resiedenceType = ui->lineEdit_residenceType->text();
            m_family.note = ui->textEdit_note->toPlainText();

            if(m_addedChildList.size() > 0)
            {
                for(auto child : m_addedChildList)
                {
                    m_family.addedChildrenList.append(child.id);
                }
            }

            if(m_addedResidentList.size() > 0)
            {
                for(auto resident : m_addedResidentList)
                {
                    m_family.addedResidentList.append(qMakePair(resident.first.id,resident.second));
                }
            }

            if(m_pFamily->append(&m_family) == true)
            {
                m_pFamily->removeOneResident(m_father.id);
                m_pFamily->removeOneResident(m_mother.id);

                QMessageBox::information(this," ",tr("تم!"));

                resetView();
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
    else
    {
        QMessageBox::critical(this," ",tr("هناك خطأ ما فالمدخلات"));
    }
}

void AddFamilyView::on_comboBox_fatherName_currentIndexChanged(int index)
{
    if(index >= 0 &&
            m_possibleFatherList.size() > 0)
    {
        m_fatherSelected = true;

        tPerson old_father = m_father;
        m_father = m_possibleFatherList[index];

        for(auto& person : m_persons)
        {
            if(person.first == old_father)
            {
                person.second = false;
            }

            if(person.first == m_father)
            {
                person.second = true;
            }
        }
    }
}

void AddFamilyView::on_comboBox_motherName_currentIndexChanged(int index)
{
    if(index >= 0 &&
            m_possibleMotherList.size() > 0)
    {
       tPerson old_mother = m_mother;
       m_mother = m_possibleMotherList[index];

       for(auto& person : m_persons)
       {
           if(person.first == old_mother)
           {
               person.second = false;
           }

           if(person.first == m_mother)
           {
               person.second = true;
           }
       }
    }
}

void AddFamilyView::on_comboBox_fatherName_activated(int index)
{
    m_fatherSelected = true;

    if(m_fatherSelected == true &&
          m_motherSelected == true)
    {
        qDebug() << "fa_change";
        ui->comboBox_toAddChildName->setEnabled(true);
        ui->comboBox_toAddResidentName->setEnabled(true);
        ui->lineEdit_residentRelation->setEnabled(true);
        ui->comboBox_toDeleteChildName->setEnabled(true);
        ui->comboBox_toDeleteResidentName->setEnabled(true);
        ui->pushButton_addChild->setEnabled(true);
        ui->pushButton_deleteChild->setEnabled(true);
        ui->pushButton_addResident->setEnabled(true);
        ui->pushButton_deleteResident->setEnabled(true);

        updatePossibleChildrenList(ui->comboBox_toAddChildName);
        updatePossibleResidentList(ui->comboBox_toAddResidentName);
    }
}

void AddFamilyView::on_comboBox_motherName_activated(int index)
{
    m_motherSelected = true;

    if(m_fatherSelected == true &&
            m_motherSelected == true)
    {
        qDebug() << "mo_change";
        ui->comboBox_toAddChildName->setEnabled(true);
        ui->comboBox_toAddResidentName->setEnabled(true);
        ui->lineEdit_residentRelation->setEnabled(true);
        ui->comboBox_toDeleteChildName->setEnabled(true);
        ui->comboBox_toDeleteResidentName->setEnabled(true);
        ui->pushButton_addChild->setEnabled(true);
        ui->pushButton_deleteChild->setEnabled(true);
        ui->pushButton_addResident->setEnabled(true);
        ui->pushButton_deleteResident->setEnabled(true);

        updatePossibleChildrenList(ui->comboBox_toAddChildName);
        updatePossibleResidentList(ui->comboBox_toAddResidentName);
    }
}

void AddFamilyView::resetView()
{
    m_fatherSelected = false;
    m_motherSelected = false;

    getAllPersons();

    m_addedChildList.clear();
    m_addedResidentList.clear();

    updatePossibleFathersList();
    updatePossibleMothersList();
    updatePossibleChildrenList(ui->comboBox_toAddChildName);
    updatePossibleResidentList(ui->comboBox_toAddResidentName);
    updateAddedChildrenList(ui->comboBox_toDeleteChildName);
    updateAddedResidentList(ui->comboBox_toDeleteResidentName);

    ui->comboBox_fatherName->setCurrentIndex(-1);
    ui->comboBox_motherName->setCurrentIndex(-1);
    ui->comboBox_toAddChildName->setCurrentIndex(-1);
    ui->comboBox_toAddResidentName->setCurrentIndex(-1);
    ui->comboBox_toDeleteChildName->setCurrentIndex(-1);
    ui->comboBox_toDeleteResidentName->setCurrentIndex(-1);
    ui->lineEdit_flatNo->clear();
    ui->lineEdit_blockNo->clear();
    ui->lineEdit_buildingNo->clear();
    ui->lineEdit_entranceNo->clear();
    ui->lineEdit_neighbourhoodNo->clear();
    ui->lineEdit_residenceType->clear();
    ui->textEdit_note->clear();

    ui->comboBox_toAddChildName->setEnabled(false);
    ui->comboBox_toAddResidentName->setEnabled(false);
    ui->lineEdit_residentRelation->setEnabled(false);
    ui->comboBox_toDeleteChildName->setEnabled(false);
    ui->comboBox_toDeleteResidentName->setEnabled(false);
    ui->pushButton_addChild->setEnabled(false);
    ui->pushButton_deleteChild->setEnabled(false);
    ui->pushButton_addResident->setEnabled(false);
    ui->pushButton_deleteResident->setEnabled(false);
}
