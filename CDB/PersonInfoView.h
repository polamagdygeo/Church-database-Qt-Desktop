#ifndef PERSONINFOVIEW_H
#define PERSONINFOVIEW_H

#include <QDialog>
#include "Person.h"
#include "Family.h"
#include "Visits.h"

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
    Person* m_pPerson;
    Family* m_pFamily;
    unsigned int m_id;
    void update(void);
};

#endif // PERSONINFOVIEW_H
