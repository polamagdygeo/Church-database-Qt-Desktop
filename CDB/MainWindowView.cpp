#include "MainWindowView.h"
#include "ui_MainWindowView.h"
#include "AddFamilyView.h"
#include "AddPersonView.h"
#include "PersonInfoView.h"
#include "FamilyInfoView.h"

MainWindow::MainWindow(QWidget *parent)
    : ui(new Ui::MainWindow),
      QMainWindow(parent)
{
    ui->setupUi(this);
    pPerson = PersonRepo::getInstance();
    pFamily = FamilyRepo::getInstance();
    pVisits = VisitsRepo::getInstance();

    QRegularExpression name("([ئءؤلألاآأ-ي]+[ ]){4}([ئءؤلألاآأ-ي]+){1}");

    ui->lineEdit_searchingName->setValidator(new QRegularExpressionValidator(name,this));

    QRegularExpression number_reg_expr("([0-9]+)");

    ui->lineEdit_searchingBlockNo->setValidator(new QRegularExpressionValidator(number_reg_expr,this));
    ui->lineEdit_searchingNeighbourhood->setValidator(new QRegularExpressionValidator(number_reg_expr,this));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_addPerson_clicked()
{
    AddPersonView p(this);
    p.setModal(true);
    p.exec();
}

void MainWindow::on_pushButton_newFamily_clicked()
{
    AddFamilyView f(this);
    f.setModal(true);
    f.exec();
}

void MainWindow::on_pushButton_searchForPerson_clicked()
{
    QString name = ui->lineEdit_searchingName->text();
    static QSqlQueryModel* pModel;

    delete pModel;

    pModel = new QSqlQueryModel;

    pPerson->getNamesAlikesIntoModel(pModel,name);

    ui->tableView->setModel(pModel);
    ui->tableView->hideColumn(0);
}

void MainWindow::on_lineEdit_searchingName_editingFinished()
{
    on_pushButton_searchForPerson_clicked();
}

void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    QString name = index.data().toString();
    int id = (index.sibling(index.row(),0)).data().toInt();

    PersonInfoView pi(id,this);
    pi.setModal(true);
    pi.exec();
}

void MainWindow::updateSlot()
{
    on_pushButton_searchForPerson_clicked();
    on_pushButton_searchForFamilies_clicked();
}

void MainWindow::on_pushButton_searchForFamilies_clicked()
{
    QString neigbourhood = ui->lineEdit_searchingNeighbourhood->text();
    QString blockNo = ui->lineEdit_searchingBlockNo->text();

    static QSqlRelationalTableModel* pModel;

    delete pModel;

    pModel = pFamily->getFamiliesByZoneIntoModel(neigbourhood,blockNo);

    ui->tableView_2->setModel(pModel);
    ui->tableView_2->hideColumn(0);
    ui->tableView_2->hideColumn(3);
    ui->tableView_2->hideColumn(4);
    ui->tableView_2->hideColumn(8);
    ui->tableView_2->hideColumn(9);
    ui->tableView_2->hideColumn(10);
}

void MainWindow::on_tableView_2_doubleClicked(const QModelIndex &index)
{
    int id = (index.sibling(index.row(),0)).data().toInt();

    FamilyInfoView fi(id,this);
    fi.setModal(true);
    fi.exec();
}

void MainWindow::on_lineEdit_searchingNeighbourhood_editingFinished()
{
    on_pushButton_searchForFamilies_clicked();
}

void MainWindow::on_lineEdit_searchingBlockNo_editingFinished()
{
    on_pushButton_searchForFamilies_clicked();
}
