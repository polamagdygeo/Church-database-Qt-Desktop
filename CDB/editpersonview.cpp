#include "EditPersonView.h"
#include "ui_editpersonview.h"
#include "QMessageBox"

EditPersonView::EditPersonView(unsigned int id,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditPersonView),
    m_id(id)
{
    ui->setupUi(this);

    m_pPerson = Person::getInstance();

    tPerson person;

    m_pPerson->get(&person,id);

    QStringList splitDate = person.birthDate.split('/');
    QDate date(splitDate[2].toInt(),splitDate[1].toInt(),splitDate[0].toInt());

    ui->lineEdit_personName_3->setText(person.name);
    ui->lineEdit_birthPlace_3->setText(person.birthPlace);
    ui->lineEdit_mobId_3->setText(person.mobNo);
    ui->lineEdit_natId_3->setText(person.natId);
    ui->dateEdit_birthDate_3->setDate(date);
    ui->lineEdit_education_3->setText(person.education);
    ui->lineEdit_personGender->setText(person.gender);
    ui->lineEdit_company_3->setText(person.company);

    QRegularExpression number_reg_expr("([0-9]+)");

    ui->lineEdit_natId_3->setValidator(new QRegularExpressionValidator(number_reg_expr,this));

    ui->lineEdit_mobId_3->setValidator(new QRegularExpressionValidator(number_reg_expr,this));

    if(person.gender == "انثي")
    {
        ui->checkBox->setEnabled(false);
    }

    if(person.jobTitle == "كاهن")
    {
        ui->checkBox->setCheckState(Qt::Checked);
        ui->checkBox->setEnabled(false);
    }
    else
    {
        ui->lineEdit_jobTitle_3->setText(person.jobTitle);
    }

    connect( this, SIGNAL(updateSignal()), parentWidget(), SLOT(updateSlot()) );
}

EditPersonView::~EditPersonView()
{
    delete ui;
}

void EditPersonView::on_pushButton_mainWinReturn_3_clicked()
{
    this->hide();
}

void EditPersonView::on_pushButton_editPerson_clicked()
{
    tPerson person;

    m_pPerson->get(&person,m_id);

    person.birthPlace = ui->lineEdit_birthPlace_3->text();
    person.mobNo = ui->lineEdit_mobId_3->text();
    person.birthDate = ui->dateEdit_birthDate_3->text();
    person.education = ui->lineEdit_education_3->text();
    person.jobTitle = ui->checkBox->checkState() == Qt::Checked ? "كاهن" : ui->lineEdit_jobTitle_3->text();
    person.company = ui->lineEdit_company_3->text();
    person.natId = ui->lineEdit_natId_3->text();

    if(m_pPerson->update(&person) == true)
    {
        QMessageBox::information(this," ",tr("تم!"));
        this->updateSignal();
    }
    else
    {
        QMessageBox::critical(this," ",tr("هناك خطأ ما!"));
    }

    this->hide();
}

void EditPersonView::on_checkBox_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        ui->lineEdit_jobTitle_3->setEnabled(false);
    }
    else
    {
        ui->lineEdit_jobTitle_3->setEnabled(true);
    }
}
