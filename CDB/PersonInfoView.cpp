#include "PersonInfoView.h"
#include "ui_PersonInfoView.h"
#include "FamilyInfoView.h"
#include "editpersonview.h"
#include "QMessageBox"

PersonInfoView::PersonInfoView(unsigned int id,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PersonInfoView),
    m_id(id)
{
    ui->setupUi(this);

    m_pPersonRepo = PersonRepo::getInstance();
    m_pFamilyRepo = FamilyRepo::getInstance();

    update();

    connect( this, SIGNAL(updateSignal()), parentWidget(), SLOT(updateSlot()) );
}

PersonInfoView::~PersonInfoView()
{
    delete ui;
}

void PersonInfoView::on_pushButton_mainWinReturn_clicked()
{
    this->hide();
}

void PersonInfoView::on_pushButton_goToFamilyInfo_clicked()
{
    int family_id = m_pFamilyRepo->getFamilyId(this->m_id);

    if(family_id != -1 &&
            family_id != 0)
    {
        this->hide();
        FamilyInfoView fi(family_id,this->parentWidget());
        fi.setModal(true);
        fi.exec();
    }
    else
    {
        QMessageBox::critical(this," ",tr("غير مضاف لاي عائله!"));
    }
}

void PersonInfoView::on_pushButton_deletePerson_clicked()
{
    bool success = false;
    PersonModel person;

    m_pPersonRepo->get(&person,this->m_id);

    success  = m_pPersonRepo->remove(this->m_id);

    if(success && m_pFamilyRepo->isParent(person.id))
    {
        success = m_pFamilyRepo->remove(m_pFamilyRepo->getFamilyId(person.id));
    }

    if(success && m_pFamilyRepo->isChild(person.id))
    {
        success = m_pFamilyRepo->removeOneChild(person.id);
    }

    if(success && m_pFamilyRepo->isResident(person.id))
    {
        success = m_pFamilyRepo->removeOneResident(person.id);
    }

    if(success == true)
    {
        QMessageBox::information(this," ",tr("تم الحذف!"));
        this->hide();
        this->updateSignal();
    }
    else
    {
        QMessageBox::critical(this," ",tr("هناك خطأ ما!"));
    }
}

void PersonInfoView::on_pushButton_editPerson_clicked()
{
    EditPersonView epv(m_id,this);
    epv.setModal(true);
    epv.exec();
}

void PersonInfoView::updateSlot()
{
    update();
}

void PersonInfoView::update(void)
{
    PersonModel person;

    m_pPersonRepo->get(&person,m_id);

    ui->lineEdit_personName->setText(person.name);
    ui->lineEdit_birthPlace->setText(person.birthPlace);
    ui->lineEdit_mobId->setText(person.mobNo);
    ui->lineEdit_natId->setText(person.natId);
    ui->lineEdit_birthDate->setText(person.birthDate);
    ui->lineEdit_education->setText(person.education);
    ui->lineEdit_personGender->setText(person.gender);
    ui->lineEdit_jobTitle->setText(person.jobTitle);
    ui->lineEdit_company->setText(person.company);
    ui->lineEdit_personMaritalState->setText(m_pFamilyRepo->isParent(m_id) == true ? "متزوج" : "اعذب");
}
