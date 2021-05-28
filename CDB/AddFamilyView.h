#ifndef ADDFAMILY_H
#define ADDFAMILY_H

#include <QDialog>
#include <PersonRepo.h>
#include <FamilyRepo.h>
#include <FamilyOpAbstractView.h>

namespace Ui {
class AddFamilyView;
}

class AddFamilyView : public QDialog , public FamilyOpAbstractView
{
    Q_OBJECT

public:
    explicit AddFamilyView(QWidget *parent = nullptr);
    ~AddFamilyView();

private slots:
    void on_pushButton_mainWinReturn_2_clicked();

    void on_pushButton_addChild_clicked();

    void on_pushButton_deleteChild_clicked();

    void on_pushButton_addResident_clicked();

    void on_pushButton_deleteResident_clicked();

    void on_pushButton_addFamily_clicked();

    void on_comboBox_fatherName_currentIndexChanged(int index);

    void on_comboBox_motherName_currentIndexChanged(int index);

    void on_comboBox_fatherName_activated(int index);

    void on_comboBox_motherName_activated(int index);

signals:
    void updateSignal();

private:
    void updatePossibleFathersList();
    void updatePossibleMothersList();

    void resetView();
    Ui::AddFamilyView *ui;
    bool m_fatherSelected;
    bool m_motherSelected;
    QList<PersonModel> m_possibleFatherList;
    QList<PersonModel> m_possibleMotherList;
};
#endif // ADDFAMILY_H
