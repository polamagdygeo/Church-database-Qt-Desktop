#include "FamilyInfoView.h"
#include "ui_FamilyInfoView.h"
#include "VisitsInfoView.h"
#include "QMessageBox"
#include "EditFamilyView.h"

FamilyInfoView::FamilyInfoView(int family_id,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FamilyInfoView),
    m_familyId(family_id)
{
    ui->setupUi(this);

    m_pPerson = Person::getInstance();
    m_pFamily = Family::getInstance();

    this->update();

    connect( this, SIGNAL(updateSignal()), parentWidget(), SLOT(updateSlot()) );
}

FamilyInfoView::~FamilyInfoView()
{
    delete ui;
}

void FamilyInfoView::on_pushButton_mainWinReturn_2_clicked()
{
    this->hide();
}

void FamilyInfoView::on_pushButton_goToVisits_clicked()
{
    VisitsInfoView vi(m_familyId,this);
    vi.setModal(true);
    vi.exec();
}

void FamilyInfoView::on_pushButton_deleteFamily_clicked()
{
    if(m_pFamily->remove(this->m_familyId) == true)
    {
//        tPerson temp;

//        m_pPerson->get(&temp,m_family.fatherId);
//        temp.isParent = false;
//        temp.maritalState = tr("اعذب");
//        m_pPerson->update(&temp);

//        m_pPerson->get(&temp,m_family.motherId);
//        temp.isParent = false;
//        temp.maritalState = tr("اعذب");
//        m_pPerson->update(&temp);

//        for(auto child : m_family.addedChildrenList)
//        {
//            m_pPerson->get(&temp,child);
//            temp.isChild = false;
//            m_pPerson->update(&temp);
//        }

//        for(auto resident : m_family.addedResidentList)
//        {
//            m_pPerson->get(&temp,resident.first);
//            temp.isResident = false;
//            m_pPerson->update(&temp);
//        }

        QMessageBox::information(this," ",tr("تم الحذف!"));
        this->hide();
        this->updateSignal();
    }
    else
    {
        QMessageBox::critical(this," ",tr("هناك خطأ ما!"));
    }
}

void FamilyInfoView::on_pushButton_editFamily_clicked()
{
    EditFamilyView efv(m_familyId,this);
    efv.setModal(true);
    efv.exec();
}

void FamilyInfoView::updateSlot()
{
    this->update();
}

void FamilyInfoView::update()
{
    m_family = m_pFamily->get(m_familyId);

    if(m_family.fatherId != -1 &&
            m_family.fatherId != 0)
    {
        tPerson father;
        m_pPerson->get(&father,m_family.fatherId);

        tPerson mother;
        m_pPerson->get(&mother,m_family.motherId);

        QList<tPerson> children;
        int i = 0;
        tPerson temp;

        ui->tableWidget_children->setRowCount(m_family.addedChildrenList.size());
        ui->tableWidget_children->setColumnCount(1);

        for(auto child_id : m_family.addedChildrenList)
        {
            m_pPerson->get(&temp,child_id);

            ui->tableWidget_children->setItem(i,0, new QTableWidgetItem(temp.name));

            i++;
        }

        QList<tPerson> resident;
        QList<QString> resident_relation;

        ui->tableWidget_resident->setRowCount(m_family.addedResidentList.size());
        ui->tableWidget_resident->setColumnCount(2);

        QStringList header;
        header <<"الاسم"<<"القرابه";
        ui->tableWidget_resident->setHorizontalHeaderLabels(header);

        i = 0;

        for(auto resident_id : m_family.addedResidentList)
        {
            m_pPerson->get(&temp,resident_id.first);

            ui->tableWidget_resident->setItem(i,0, new QTableWidgetItem(temp.name));

            ui->tableWidget_resident->setItem(i,1, new QTableWidgetItem(resident_id.second));

            i++;
        }

        ui->lineEdit_fatherName->setText(father.name);
        ui->lineEdit_motherName->setText(mother.name);

        ui->lineEdit_blockNo->setText(m_family.blockNo);
        ui->lineEdit_buildingNo->setText(m_family.buildingNo);
        ui->lineEdit_neighbourhoodNo->setText(m_family.neighbourhoodNo);
        ui->lineEdit_residenceType->setText(m_family.resiedenceType);
        ui->lineEdit_flatNo->setText(m_family.flatNo);
        ui->lineEdit_entranceNo->setText(m_family.entranceNo);

        ui->textEdit_note->setText(m_family.note);
    }
}
