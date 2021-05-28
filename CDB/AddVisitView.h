#ifndef ADDVISIT_H
#define ADDVISIT_H

#include <QDialog>
#include "VisitsRepo.h"
#include "PersonRepo.h"

namespace Ui {
class AddVisit;
}

class AddVisitView : public QDialog
{
    Q_OBJECT

public:
    explicit AddVisitView(int m_family_id,QWidget *parent = nullptr);
    ~AddVisitView();

private slots:
    void on_pushButton_mainWinReturn_2_clicked();

    void on_pushButton_addVisit_2_clicked();

    void updatePossiblePriestList();

signals:
    void updateSignal();

private:
    Ui::AddVisit *ui;
    VisitsRepo *m_pVisitsRepo;
    PersonRepo *m_pPersonRepo;
    int m_family_id;
    QList<PersonModel> m_priestsList;
    void resetView();
};

#endif // ADDVISIT_H
