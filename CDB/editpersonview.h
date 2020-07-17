#ifndef EDITPERSONVIEW_H
#define EDITPERSONVIEW_H

#include <QDialog>
#include "Person.h"

namespace Ui {
class EditPersonView;
}

class EditPersonView : public QDialog
{
    Q_OBJECT

public:
    explicit EditPersonView(unsigned int m_id,QWidget *parent = nullptr);
    ~EditPersonView();

private slots:
    void on_pushButton_mainWinReturn_3_clicked();

    void on_pushButton_editPerson_clicked();

    void on_checkBox_stateChanged(int arg1);

signals:
    void updateSignal();

private:
    Ui::EditPersonView *ui;
    Person* m_pPerson;
    unsigned int m_id;
};

#endif // EDITPERSONVIEW_H
