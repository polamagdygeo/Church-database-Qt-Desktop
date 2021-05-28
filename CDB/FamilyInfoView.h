#ifndef FAMILYINFOVIEW_H
#define FAMILYINFOVIEW_H

#include <QDialog>
#include "FamilyRepo.h"
#include "VisitsRepo.h"
#include "PersonRepo.h"

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
    FamilyRepo* m_pFamily;
    PersonRepo* m_pPerson;
    FamilyModel m_family;
    int m_familyId;
    void update();
};

#endif // FAMILYINFOVIEW_H
