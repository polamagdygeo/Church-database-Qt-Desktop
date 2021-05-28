#ifndef PERSONINFOVIEW_H
#define PERSONINFOVIEW_H

#include <QDialog>
#include "PersonRepo.h"
#include "FamilyRepo.h"
#include "VisitsRepo.h"

namespace Ui {
class PersonInfoView;
}

class PersonInfoView : public QDialog
{
    Q_OBJECT

public:
    explicit PersonInfoView(unsigned int name,QWidget *parent = nullptr);
    ~PersonInfoView();

private slots:
    void on_pushButton_mainWinReturn_clicked();

    void on_pushButton_goToFamilyInfo_clicked();

    void on_pushButton_deletePerson_clicked();
    void on_pushButton_editPerson_clicked();

    void updateSlot();

signals:
    void updateSignal();

private:
    Ui::PersonInfoView *ui;
    PersonRepo* m_pPersonRepo;
    FamilyRepo* m_pFamilyRepo;
    unsigned int m_id;
    void update(void);
};

#endif // PERSONINFOVIEW_H
