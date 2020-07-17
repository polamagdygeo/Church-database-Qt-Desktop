#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Person.h"
#include "Family.h"
#include "Visits.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_addPerson_clicked();

    void on_pushButton_newFamily_clicked();

    void on_pushButton_searchForPerson_clicked();

    void on_lineEdit_searchingName_editingFinished();

    void on_tableView_doubleClicked(const QModelIndex &index);

    void updateSlot();

    void on_pushButton_searchForFamilies_clicked();

    void on_tableView_2_doubleClicked(const QModelIndex &index);

    void on_lineEdit_searchingNeighbourhood_editingFinished();

    void on_lineEdit_searchingBlockNo_editingFinished();

private:
    Ui::MainWindow *ui;
    Person* pPerson;
    Family* pFamily;
    Visits* pVisits;
};
#endif // MAINWINDOW_H
