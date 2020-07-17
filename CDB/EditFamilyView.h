#ifndef EDITFAMILYVIEW_H
#define EDITFAMILYVIEW_H

#include <QDialog>
#include <Family.h>
#include "Person.h"
#include <FamilyOpAbstractView.h>

namespace Ui {
class EditFamilyView;
}

class EditFamilyView : public QDialog , public FamilyOpAbstractView
{
    Q_OBJECT

public:
    explicit EditFamilyView(int family_id,QWidget *parent = nullptr);
    ~EditFamilyView();

private slots:
    void on_pushButton_mainWinReturn_4_clicked();

    void on_pushButton_addChild_3_clicked();

    void on_pushButton_deleteChild_3_clicked();

    void on_pushButton_addResident_3_clicked();

    void on_pushButton_deleteResident_3_clicked();

    void on_pushButton_applyFamilyEdit_clicked();

signals:
    void updateSignal();

private:
    Ui::EditFamilyView *ui;


};

#endif // EDITFAMILYVIEW_H
