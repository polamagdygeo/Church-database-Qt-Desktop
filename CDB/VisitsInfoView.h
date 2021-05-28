#ifndef VISITSINFOVIEW_H
#define VISITSINFOVIEW_H

#include <QDialog>
#include "VisitsRepo.h"
#include "PersonRepo.h"

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
    VisitsRepo *m_pVisitsRepo;
    PersonRepo *m_pPersonRepo;
    int m_familyId;
    QList<VisitModel> m_visitsList;
    void update();
};

#endif // VISITSINFOVIEW_H
