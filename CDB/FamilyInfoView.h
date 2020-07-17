#ifndef FAMILYINFOVIEW_H
#define FAMILYINFOVIEW_H

#include <QDialog>
#include "Family.h"
#include "Visits.h"
#include "Person.h"

namespace Ui {
class FamilyInfoView;
}

class FamilyInfoView : public QDialog
{
    Q_OBJECT

public:
    explicit FamilyInfoView(int m_familyId,QWidget *parent = nullptr);
    ~FamilyInfoView();

private slots:
    void on_pushButton_mainWinReturn_2_clicked();

    void on_pushButton_goToVisits_clicked();

    void on_pushButton_deleteFamily_clicked();

    void on_pushButton_editFamily_clicked();

    void updateSlot();

signals:
    void updateSignal();

private:
    Ui::FamilyInfoView *ui;
    Family* m_pFamily;
    Person* m_pPerson;
    tFamily m_family;
    int m_familyId;
    void update();
};

#endif // FAMILYINFOVIEW_H
