/********************************************************************************
** Form generated from reading UI file 'VisitsInfoView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISITSINFOVIEW_H
#define UI_VISITSINFOVIEW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisitsInfoView
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QTableWidget *tableWidget_visits;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_addVisit;
    QPushButton *pushButton_deleteVisit;
    QPushButton *pushButton_mainWinReturn_3;

    void setupUi(QDialog *VisitsInfoView)
    {
        if (VisitsInfoView->objectName().isEmpty())
            VisitsInfoView->setObjectName(QStringLiteral("VisitsInfoView"));
        VisitsInfoView->resize(418, 220);
        VisitsInfoView->setLayoutDirection(Qt::RightToLeft);
        VisitsInfoView->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        layoutWidget = new QWidget(VisitsInfoView);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 401, 201));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3);

        tableWidget_visits = new QTableWidget(layoutWidget);
        tableWidget_visits->setObjectName(QStringLiteral("tableWidget_visits"));
        tableWidget_visits->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_visits->setAlternatingRowColors(true);
        tableWidget_visits->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_4->addWidget(tableWidget_visits);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_addVisit = new QPushButton(layoutWidget);
        pushButton_addVisit->setObjectName(QStringLiteral("pushButton_addVisit"));

        horizontalLayout_5->addWidget(pushButton_addVisit);

        pushButton_deleteVisit = new QPushButton(layoutWidget);
        pushButton_deleteVisit->setObjectName(QStringLiteral("pushButton_deleteVisit"));

        horizontalLayout_5->addWidget(pushButton_deleteVisit);

        pushButton_mainWinReturn_3 = new QPushButton(layoutWidget);
        pushButton_mainWinReturn_3->setObjectName(QStringLiteral("pushButton_mainWinReturn_3"));
        pushButton_mainWinReturn_3->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));

        horizontalLayout_5->addWidget(pushButton_mainWinReturn_3);


        verticalLayout_4->addLayout(horizontalLayout_5);


        retranslateUi(VisitsInfoView);

        QMetaObject::connectSlotsByName(VisitsInfoView);
    } // setupUi

    void retranslateUi(QDialog *VisitsInfoView)
    {
        VisitsInfoView->setWindowTitle(QApplication::translate("VisitsInfoView", "\330\247\331\204\330\247\331\201\330\252\331\202\330\247\330\257", Q_NULLPTR));
        label_3->setText(QApplication::translate("VisitsInfoView", "\330\252\330\247\330\261\331\212\330\256 \330\247\331\204\330\247\331\201\330\252\331\202\330\247\330\257", Q_NULLPTR));
        pushButton_addVisit->setText(QApplication::translate("VisitsInfoView", "\330\247\330\266\330\247\331\201\331\207", Q_NULLPTR));
        pushButton_deleteVisit->setText(QApplication::translate("VisitsInfoView", "\330\255\330\260\331\201", Q_NULLPTR));
        pushButton_mainWinReturn_3->setText(QApplication::translate("VisitsInfoView", "\330\261\330\254\331\210\330\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VisitsInfoView: public Ui_VisitsInfoView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISITSINFOVIEW_H
