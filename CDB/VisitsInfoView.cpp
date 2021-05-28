#include "VisitsInfoView.h"
#include "ui_VisitsInfoView.h"
#include "AddVisitView.h"

VisitsInfoView::VisitsInfoView(int family_id,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VisitsInfoView),
    m_familyId(family_id)
{
    ui->setupUi(this);

    m_pPersonRepo = PersonRepo::getInstance();
    m_pVisitsRepo = VisitsRepo::getInstance();

    this->update();

}

VisitsInfoView::~VisitsInfoView()
{
    delete ui;
}

void VisitsInfoView::on_pushButton_mainWinReturn_3_clicked()
{
    this->hide();
}

void VisitsInfoView::on_pushButton_addVisit_clicked()
{
    AddVisitView av(m_familyId,this);
    av.setModal(true);
    av.exec();
}

void VisitsInfoView::updateSlot()
{
    this->update();
}

void VisitsInfoView::on_pushButton_deleteVisit_clicked()
{
    if(ui->tableWidget_visits->rowCount() > 0)
    {
        int selected_id = m_visitsList[ui->tableWidget_visits->currentRow()].visitId;

        if(m_pVisitsRepo->remove(selected_id))
        {
            this->update();
        }
    }
}

void VisitsInfoView::update()
{
    m_visitsList.clear();

    m_pVisitsRepo->getForFamily(m_familyId,m_visitsList);

    ui->tableWidget_visits->setRowCount(m_visitsList.size());
    ui->tableWidget_visits->setColumnCount(2);

    QStringList header;
    header << "الكاهن" << "التاريخ";
    ui->tableWidget_visits->setHorizontalHeaderLabels(header);

    int i = 0;

    for(auto visit : m_visitsList)
    {
        PersonModel priest;

        m_pPersonRepo->get(&priest,visit.priestId);

        ui->tableWidget_visits->setItem(i,0, new QTableWidgetItem(priest.name));


        ui->tableWidget_visits->setItem(i,1, new QTableWidgetItem(visit.date));

        i++;
    }
}
