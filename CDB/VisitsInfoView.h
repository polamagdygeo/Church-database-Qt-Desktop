#ifndef VISITSINFOVIEW_H
#define VISITSINFOVIEW_H

#include <QDialog>
#include "Visits.h"
#include "Person.h"

namespace Ui {
class VisitsInfoView;
}

class VisitsInfoView : public QDialog
{
    Q_OBJECT

public:
    explicit VisitsInfoView(int m_familyId,QWidget *parent = nullptr);
    ~VisitsInfoView();

private slots:
    void on_pushButton_mainWinReturn_3_clicked();

    void on_pushButton_addVisit_clicked();

    void updateSlot();

    void on_pushButton_deleteVisit_clicked();

private:
    Ui::VisitsInfoView *ui;
    Visits *m_pVisits;
    Person *m_pPerson;
    int m_familyId;
    QList<tVisit> m_visitsList;
    void update();
};

#endif // VISITSINFOVIEW_H
