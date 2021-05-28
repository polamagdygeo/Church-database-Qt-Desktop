#include "AddVisitView.h"
#include "ui_AddVisitView.h"
#include "QMessageBox"

AddVisitView::AddVisitView(int family_id,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddVisit),
    m_family_id(family_id)
{
    ui->setupUi(this);

    m_pPersonRepo = PersonRepo::getInstance();
    m_pVisitsRepo = VisitsRepo::getInstance();

    /*Get priest and set to combo box*/
    m_priestsList = m_pPersonRepo->getAll(PersonRepo::JOB_PRIEST);

    QRegularExpression name("([ئءؤلألاآأ-ي]+[ ]){4}([ئءؤلألاآأ-ي]+){1}");

    ui->comboBox_priest->setValidator(new QRegularExpressionValidator(name,this));

    updatePossiblePriestList();

    connect( this, SIGNAL(updateSignal()), parentWidget(), SLOT(updateSlot()) );
}

AddVisitView::~AddVisitView()
{
    delete ui;
}

void AddVisitView::on_pushButton_mainWinReturn_2_clicked()
{
    this->updateSignal();
    this->hide();
}

void AddVisitView::updatePossiblePriestList()
{
    ui->comboBox_priest->clear();

    for(auto priest : m_priestsList)
    {
        ui->comboBox_priest->addItem(priest.name);
    }
}

void AddVisitView::on_pushButton_addVisit_2_clicked()
{
    int priest_idx = ui->comboBox_priest->currentIndex();

    if(priest_idx >= 0 &&
            m_priestsList[priest_idx].name == ui->comboBox_priest->currentText())
    {
        auto priest = m_priestsList[priest_idx];

        VisitModel visit;
        visit.date = ui->dateEdit_2->text();
        visit.familyId = m_family_id;
        visit.priestId = priest.id;

        if(m_pVisitsRepo->append(visit) == true)
        {
            QMessageBox::information(this," ",tr("تم!"));

            /*boxs data should be cleared*/
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

void AddVisitView::resetView()
{
    ui->comboBox_priest->setCurrentIndex(-1);
    ui->dateEdit_2->clear();
}
