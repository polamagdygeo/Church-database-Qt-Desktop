#include "AddPersonView.h"
#include "ui_AddPersonView.h"
#include "QMessageBox"
#include "QValidator"

AddPersonView::AddPersonView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPerson)
{
    ui->setupUi(this);

    QRegularExpression name_reg_expr("([ئءؤلألاآأ-ي]+)");

    QRegularExpression last_name_reg_expr("([ئءؤلألاآأ-ي]+[ ]){2}([ئءؤلألاآأ-ي]+){1}");

    QRegularExpression number_reg_expr("([0-9]+)");

    ui->lineEdit_personName->setValidator(new QRegularExpressionValidator(name_reg_expr,this));

    ui->lineEdit_personName_2->setValidator(new QRegularExpressionValidator(name_reg_expr,this));

    ui->lineEdit_personName_3->setValidator(new QRegularExpressionValidator(last_name_reg_expr,this));

    ui->lineEdit_natId->setValidator(new QRegularExpressionValidator(number_reg_expr,this));

    ui->lineEdit_mobId->setValidator(new QRegularExpressionValidator(number_reg_expr,this));

    m_pPerson = Person::getInstance();

    connect( this, SIGNAL(updateSignal()), parentWidget(), SLOT(updateSlot()) );
}

AddPersonView::~AddPersonView()
{
    delete ui;
}

void AddPersonView::on_pushButton_mainWinReturn_clicked()
{
    this->updateSignal();
    this->destroy();
}

void AddPersonView::on_pushButton_addPerson_clicked()
{
    if(ui->lineEdit_personName->text() != "" &&
            ui->lineEdit_personName_2->text() != "" &&
            ui->lineEdit_personName_3->text() != "" &&
            ui->comboBox_gender->currentText() != "")
    {
        m_person.name =  ui->lineEdit_personName->text() + " " + ui->lineEdit_personName_2->text() + " " + ui->lineEdit_personName_3->text();
        m_person.birthPlace = ui->lineEdit_birthPlace->text();
        m_person.mobNo = ui->lineEdit_mobId->text();
        m_person.natId = ui->lineEdit_natId->text();
        m_person.birthDate = ui->dateEdit_birthDate->text();
        m_person.education = ui->lineEdit_education->text();
        m_person.gender = ui->comboBox_gender->currentText();
        m_person.jobTitle = ui->checkBox->checkState() == Qt::Checked ? "كاهن" : ui->lineEdit_jobTitle->text();
        m_person.company = ui->lineEdit_company->text();

        if(m_pPerson->append(&m_person) == true)
        {
            resetView();

            QMessageBox::information(this," ",tr("تم!"));
        }
        else
        {
            QMessageBox::critical(this," ",tr("هناك خطأ ما!"));
        }
    }
    else
    {
        QMessageBox::critical(this," ",tr("هناك خطأ ما!"));
    }
}

void AddPersonView::resetView()
{
    ui->lineEdit_personName->clear();
    ui->lineEdit_personName_2->clear();
    ui->lineEdit_personName_3->clear();
    ui->lineEdit_birthPlace->clear();
    ui->lineEdit_mobId->clear();
    ui->lineEdit_natId->clear();
    ui->dateEdit_birthDate->clear();
    ui->lineEdit_education->clear();
    ui->comboBox_gender->setCurrentIndex(-1);
    ui->lineEdit_jobTitle->clear();
    ui->lineEdit_company->clear();
    ui->checkBox->setCheckState(Qt::Unchecked);
}

void AddPersonView::on_checkBox_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        ui->lineEdit_jobTitle->setEnabled(false);
    }
    else
    {
        ui->lineEdit_jobTitle->setEnabled(true);
    }
}

void AddPersonView::on_comboBox_gender_activated(const QString &arg1)
{
    ui->checkBox->setCheckState(Qt::Unchecked);

    if(arg1 == "انثي")
    {
        ui->checkBox->setEnabled(false);
    }
    else
    {
        ui->checkBox->setEnabled(true);
    }
}
