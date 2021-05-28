#ifndef ADDPERSON_H
#define ADDPERSON_H

#include <QDialog>
#include "PersonRepo.h"

namespace Ui {
class AddPerson;
}

class AddPersonView : public QDialog
{
    Q_OBJECT

public:
    explicit AddPersonView(QWidget *parent = nullptr);
    ~AddPersonView();

signals:
    void updateSignal();

private slots:
    void on_pushButton_mainWinReturn_clicked();

    void on_pushButton_addPerson_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_comboBox_gender_activated(const QString &arg1);

private:
    void resetView();
    Ui::AddPerson *ui;
    PersonRepo* m_pPersonRepo;
    PersonModel m_person;
};

#endif // ADDPERSON_H
