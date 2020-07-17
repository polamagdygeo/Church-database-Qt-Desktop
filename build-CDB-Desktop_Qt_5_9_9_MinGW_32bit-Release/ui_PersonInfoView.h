/********************************************************************************
** Form generated from reading UI file 'PersonInfoView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONINFOVIEW_H
#define UI_PERSONINFOVIEW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PersonInfoView
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_personName;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_10;
    QLineEdit *lineEdit_personGender;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_9;
    QLineEdit *lineEdit_personMaritalState;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_2;
    QLineEdit *lineEdit_birthPlace;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_3;
    QLineEdit *lineEdit_birthDate;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QLineEdit *lineEdit_natId;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEdit_education;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLineEdit *lineEdit_jobTitle;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QLineEdit *lineEdit_company;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_mobId;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_goToFamilyInfo;
    QPushButton *pushButton_editPerson;
    QPushButton *pushButton_deletePerson;
    QPushButton *pushButton_mainWinReturn;

    void setupUi(QDialog *PersonInfoView)
    {
        if (PersonInfoView->objectName().isEmpty())
            PersonInfoView->setObjectName(QStringLiteral("PersonInfoView"));
        PersonInfoView->resize(437, 239);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PersonInfoView->sizePolicy().hasHeightForWidth());
        PersonInfoView->setSizePolicy(sizePolicy);
        PersonInfoView->setMinimumSize(QSize(437, 239));
        PersonInfoView->setMaximumSize(QSize(437, 239));
        PersonInfoView->setLayoutDirection(Qt::RightToLeft);
        PersonInfoView->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        layoutWidget = new QWidget(PersonInfoView);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 423, 223));
        verticalLayout_12 = new QVBoxLayout(layoutWidget);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit_personName = new QLineEdit(layoutWidget);
        lineEdit_personName->setObjectName(QStringLiteral("lineEdit_personName"));
        lineEdit_personName->setEnabled(true);
        lineEdit_personName->setLayoutDirection(Qt::RightToLeft);
        lineEdit_personName->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_personName->setMaxLength(50);
        lineEdit_personName->setFrame(false);
        lineEdit_personName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_personName->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_personName);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_9->addWidget(label_10);

        lineEdit_personGender = new QLineEdit(layoutWidget);
        lineEdit_personGender->setObjectName(QStringLiteral("lineEdit_personGender"));
        lineEdit_personGender->setFrame(false);
        lineEdit_personGender->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_personGender->setReadOnly(true);

        verticalLayout_9->addWidget(lineEdit_personGender);


        horizontalLayout->addLayout(verticalLayout_9);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_8->addWidget(label_9);

        lineEdit_personMaritalState = new QLineEdit(layoutWidget);
        lineEdit_personMaritalState->setObjectName(QStringLiteral("lineEdit_personMaritalState"));
        lineEdit_personMaritalState->setFrame(false);
        lineEdit_personMaritalState->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_personMaritalState->setReadOnly(true);

        verticalLayout_8->addWidget(lineEdit_personMaritalState);


        horizontalLayout->addLayout(verticalLayout_8);


        verticalLayout_11->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_10->addWidget(label_2);

        lineEdit_birthPlace = new QLineEdit(layoutWidget);
        lineEdit_birthPlace->setObjectName(QStringLiteral("lineEdit_birthPlace"));
        lineEdit_birthPlace->setLayoutDirection(Qt::RightToLeft);
        lineEdit_birthPlace->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_birthPlace->setMaxLength(30);
        lineEdit_birthPlace->setFrame(false);
        lineEdit_birthPlace->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_birthPlace->setReadOnly(true);

        verticalLayout_10->addWidget(lineEdit_birthPlace);


        horizontalLayout_2->addLayout(verticalLayout_10);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_7->addWidget(label_3);

        lineEdit_birthDate = new QLineEdit(layoutWidget);
        lineEdit_birthDate->setObjectName(QStringLiteral("lineEdit_birthDate"));
        lineEdit_birthDate->setFrame(false);
        lineEdit_birthDate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_birthDate->setReadOnly(true);

        verticalLayout_7->addWidget(lineEdit_birthDate);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_6->addWidget(label_4);

        lineEdit_natId = new QLineEdit(layoutWidget);
        lineEdit_natId->setObjectName(QStringLiteral("lineEdit_natId"));
        lineEdit_natId->setLayoutDirection(Qt::RightToLeft);
        lineEdit_natId->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_natId->setMaxLength(14);
        lineEdit_natId->setFrame(false);
        lineEdit_natId->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_natId->setReadOnly(true);

        verticalLayout_6->addWidget(lineEdit_natId);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_11->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        lineEdit_education = new QLineEdit(layoutWidget);
        lineEdit_education->setObjectName(QStringLiteral("lineEdit_education"));
        lineEdit_education->setLayoutDirection(Qt::RightToLeft);
        lineEdit_education->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_education->setMaxLength(30);
        lineEdit_education->setFrame(false);
        lineEdit_education->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_education->setReadOnly(true);

        verticalLayout_3->addWidget(lineEdit_education);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_4->addWidget(label_7);

        lineEdit_jobTitle = new QLineEdit(layoutWidget);
        lineEdit_jobTitle->setObjectName(QStringLiteral("lineEdit_jobTitle"));
        lineEdit_jobTitle->setLayoutDirection(Qt::RightToLeft);
        lineEdit_jobTitle->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_jobTitle->setMaxLength(30);
        lineEdit_jobTitle->setFrame(false);
        lineEdit_jobTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_jobTitle->setReadOnly(true);

        verticalLayout_4->addWidget(lineEdit_jobTitle);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_5->addWidget(label_8);

        lineEdit_company = new QLineEdit(layoutWidget);
        lineEdit_company->setObjectName(QStringLiteral("lineEdit_company"));
        lineEdit_company->setLayoutDirection(Qt::RightToLeft);
        lineEdit_company->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_company->setMaxLength(30);
        lineEdit_company->setFrame(false);
        lineEdit_company->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_company->setReadOnly(true);

        verticalLayout_5->addWidget(lineEdit_company);


        horizontalLayout_3->addLayout(verticalLayout_5);


        verticalLayout_11->addLayout(horizontalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        lineEdit_mobId = new QLineEdit(layoutWidget);
        lineEdit_mobId->setObjectName(QStringLiteral("lineEdit_mobId"));
        lineEdit_mobId->setLayoutDirection(Qt::RightToLeft);
        lineEdit_mobId->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_mobId->setMaxLength(11);
        lineEdit_mobId->setFrame(false);
        lineEdit_mobId->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_mobId->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_mobId);


        verticalLayout_11->addLayout(verticalLayout_2);


        verticalLayout_12->addLayout(verticalLayout_11);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_goToFamilyInfo = new QPushButton(layoutWidget);
        pushButton_goToFamilyInfo->setObjectName(QStringLiteral("pushButton_goToFamilyInfo"));

        horizontalLayout_4->addWidget(pushButton_goToFamilyInfo);

        pushButton_editPerson = new QPushButton(layoutWidget);
        pushButton_editPerson->setObjectName(QStringLiteral("pushButton_editPerson"));

        horizontalLayout_4->addWidget(pushButton_editPerson);

        pushButton_deletePerson = new QPushButton(layoutWidget);
        pushButton_deletePerson->setObjectName(QStringLiteral("pushButton_deletePerson"));

        horizontalLayout_4->addWidget(pushButton_deletePerson);

        pushButton_mainWinReturn = new QPushButton(layoutWidget);
        pushButton_mainWinReturn->setObjectName(QStringLiteral("pushButton_mainWinReturn"));

        horizontalLayout_4->addWidget(pushButton_mainWinReturn);


        verticalLayout_12->addLayout(horizontalLayout_4);


        retranslateUi(PersonInfoView);

        QMetaObject::connectSlotsByName(PersonInfoView);
    } // setupUi

    void retranslateUi(QDialog *PersonInfoView)
    {
        PersonInfoView->setWindowTitle(QApplication::translate("PersonInfoView", "\330\250\331\212\330\247\331\206\330\247\330\252 \330\247\331\204\330\264\330\256\330\265", Q_NULLPTR));
        label->setText(QApplication::translate("PersonInfoView", "\330\247\331\204\330\247\330\263\331\205 \330\250\330\247\331\204\331\203\330\247\331\205\331\204", Q_NULLPTR));
        lineEdit_personName->setText(QString());
        label_10->setText(QApplication::translate("PersonInfoView", "\330\247\331\204\330\254\331\206\330\263", Q_NULLPTR));
        label_9->setText(QApplication::translate("PersonInfoView", "\330\247\331\204\330\255\330\247\331\204\331\207 \330\247\331\204\330\247\330\254\330\252\331\205\330\247\330\271\331\212\331\207", Q_NULLPTR));
        label_2->setText(QApplication::translate("PersonInfoView", "\331\205\330\255\331\204 \330\247\331\204\331\205\331\212\331\204\330\247\330\257", Q_NULLPTR));
        lineEdit_birthPlace->setText(QString());
        label_3->setText(QApplication::translate("PersonInfoView", "\330\252\330\247\330\261\331\212\330\256 \330\247\331\204\331\205\331\212\331\204\330\247\330\257", Q_NULLPTR));
        label_4->setText(QApplication::translate("PersonInfoView", "\330\247\331\204\330\261\331\202\331\205 \330\247\331\204\331\202\331\210\331\205\331\212", Q_NULLPTR));
        lineEdit_natId->setText(QString());
        label_6->setText(QApplication::translate("PersonInfoView", "\330\247\331\204\331\205\330\244\331\207\331\204 \330\247\331\204\330\257\330\261\330\247\330\263\331\212", Q_NULLPTR));
        lineEdit_education->setText(QString());
        label_7->setText(QApplication::translate("PersonInfoView", "\330\247\331\204\331\210\330\270\331\212\331\201\331\207", Q_NULLPTR));
        lineEdit_jobTitle->setText(QString());
        label_8->setText(QApplication::translate("PersonInfoView", "\330\247\331\204\330\264\330\261\331\203\331\207", Q_NULLPTR));
        lineEdit_company->setText(QString());
        label_5->setText(QApplication::translate("PersonInfoView", "\330\261\331\202\331\205 \330\247\331\204\331\207\330\247\330\252\331\201", Q_NULLPTR));
        lineEdit_mobId->setText(QString());
        pushButton_goToFamilyInfo->setText(QApplication::translate("PersonInfoView", "\330\247\331\204\330\271\330\247\330\246\331\204\331\207", Q_NULLPTR));
        pushButton_editPerson->setText(QApplication::translate("PersonInfoView", "\330\252\330\271\330\257\331\212\331\204", Q_NULLPTR));
        pushButton_deletePerson->setText(QApplication::translate("PersonInfoView", "\330\255\330\260\331\201", Q_NULLPTR));
        pushButton_mainWinReturn->setText(QApplication::translate("PersonInfoView", "\330\261\330\254\331\210\330\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PersonInfoView: public Ui_PersonInfoView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONINFOVIEW_H
