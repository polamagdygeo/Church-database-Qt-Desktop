/********************************************************************************
** Form generated from reading UI file 'AddVisitView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDVISITVIEW_H
#define UI_ADDVISITVIEW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddVisit
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox_priest;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QDateEdit *dateEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_addVisit_2;
    QPushButton *pushButton_mainWinReturn_2;

    void setupUi(QDialog *AddVisit)
    {
        if (AddVisit->objectName().isEmpty())
            AddVisit->setObjectName(QStringLiteral("AddVisit"));
        AddVisit->resize(380, 111);
        AddVisit->setLayoutDirection(Qt::RightToLeft);
        layoutWidget = new QWidget(AddVisit);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 361, 91));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        comboBox_priest = new QComboBox(layoutWidget);
        comboBox_priest->setObjectName(QStringLiteral("comboBox_priest"));
        comboBox_priest->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        comboBox_priest->setEditable(true);

        verticalLayout->addWidget(comboBox_priest);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        dateEdit_2 = new QDateEdit(layoutWidget);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setLayoutDirection(Qt::LeftToRight);
        dateEdit_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        dateEdit_2->setCalendarPopup(true);

        verticalLayout_2->addWidget(dateEdit_2);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_addVisit_2 = new QPushButton(layoutWidget);
        pushButton_addVisit_2->setObjectName(QStringLiteral("pushButton_addVisit_2"));

        horizontalLayout_4->addWidget(pushButton_addVisit_2);

        pushButton_mainWinReturn_2 = new QPushButton(layoutWidget);
        pushButton_mainWinReturn_2->setObjectName(QStringLiteral("pushButton_mainWinReturn_2"));
        pushButton_mainWinReturn_2->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));

        horizontalLayout_4->addWidget(pushButton_mainWinReturn_2);


        verticalLayout_3->addLayout(horizontalLayout_4);


        retranslateUi(AddVisit);

        QMetaObject::connectSlotsByName(AddVisit);
    } // setupUi

    void retranslateUi(QDialog *AddVisit)
    {
        AddVisit->setWindowTitle(QApplication::translate("AddVisit", "\330\247\330\266\330\247\331\201\331\207 \330\247\331\201\330\252\331\202\330\247\330\257", Q_NULLPTR));
        label->setText(QApplication::translate("AddVisit", "\330\247\330\263\331\205 \330\247\331\204\331\203\330\247\331\207\331\206", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddVisit", "\330\247\331\204\330\252\330\247\330\261\331\212\330\256", Q_NULLPTR));
        dateEdit_2->setDisplayFormat(QApplication::translate("AddVisit", "yyyy/M/d", Q_NULLPTR));
        pushButton_addVisit_2->setText(QApplication::translate("AddVisit", "\330\247\330\266\330\247\331\201\331\207", Q_NULLPTR));
        pushButton_mainWinReturn_2->setText(QApplication::translate("AddVisit", "\330\261\330\254\331\210\330\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddVisit: public Ui_AddVisit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVISITVIEW_H
