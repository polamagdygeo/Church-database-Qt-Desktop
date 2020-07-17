/********************************************************************************
** Form generated from reading UI file 'AddPersonView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPERSONVIEW_H
#define UI_ADDPERSONVIEW_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPerson
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_personName;
    QLineEdit *lineEdit_personName_2;
    QLineEdit *lineEdit_personName_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_10;
    QComboBox *comboBox_gender;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_2;
    QLineEdit *lineEdit_birthPlace;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_3;
    QDateEdit *dateEdit_birthDate;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QLineEdit *lineEdit_natId;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QLineEdit *lineEdit_company;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox;
    QLineEdit *lineEdit_jobTitle;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEdit_education;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_mobId;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_addPerson;
    QPushButton *pushButton_mainWinReturn;

    void setupUi(QDialog *AddPerson)
    {
        if (AddPerson->objectName().isEmpty())
            AddPerson->setObjectName(QStringLiteral("AddPerson"));
        AddPerson->resize(493, 241);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddPerson->sizePolicy().hasHeightForWidth());
        AddPerson->setSizePolicy(sizePolicy);
        AddPerson->setMinimumSize(QSize(493, 241));
        AddPerson->setMaximumSize(QSize(493, 241));
        AddPerson->setLayoutDirection(Qt::RightToLeft);
        AddPerson->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        layoutWidget = new QWidget(AddPerson);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 476, 225));
        verticalLayout_9 = new QVBoxLayout(layoutWidget);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_personName = new QLineEdit(layoutWidget);
        lineEdit_personName->setObjectName(QStringLiteral("lineEdit_personName"));
        lineEdit_personName->setLayoutDirection(Qt::RightToLeft);
        lineEdit_personName->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_personName->setMaxLength(50);
        lineEdit_personName->setClearButtonEnabled(false);

        horizontalLayout->addWidget(lineEdit_personName);

        lineEdit_personName_2 = new QLineEdit(layoutWidget);
        lineEdit_personName_2->setObjectName(QStringLiteral("lineEdit_personName_2"));
        lineEdit_personName_2->setLayoutDirection(Qt::RightToLeft);
        lineEdit_personName_2->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_personName_2->setMaxLength(50);

        horizontalLayout->addWidget(lineEdit_personName_2);

        lineEdit_personName_3 = new QLineEdit(layoutWidget);
        lineEdit_personName_3->setObjectName(QStringLiteral("lineEdit_personName_3"));
        lineEdit_personName_3->setLayoutDirection(Qt::RightToLeft);
        lineEdit_personName_3->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_personName_3->setMaxLength(50);

        horizontalLayout->addWidget(lineEdit_personName_3);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_8->addWidget(label_10);

        comboBox_gender = new QComboBox(layoutWidget);
        comboBox_gender->setObjectName(QStringLiteral("comboBox_gender"));
        comboBox_gender->setLayoutDirection(Qt::RightToLeft);
        comboBox_gender->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));

        verticalLayout_8->addWidget(comboBox_gender);


        horizontalLayout_5->addLayout(verticalLayout_8);


        verticalLayout_9->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
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

        verticalLayout_10->addWidget(lineEdit_birthPlace);


        horizontalLayout_3->addLayout(verticalLayout_10);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_7->addWidget(label_3);

        dateEdit_birthDate = new QDateEdit(layoutWidget);
        dateEdit_birthDate->setObjectName(QStringLiteral("dateEdit_birthDate"));
        dateEdit_birthDate->setLayoutDirection(Qt::LeftToRight);
        dateEdit_birthDate->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        dateEdit_birthDate->setWrapping(true);
        dateEdit_birthDate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEdit_birthDate->setProperty("showGroupSeparator", QVariant(false));
        dateEdit_birthDate->setCurrentSection(QDateTimeEdit::DaySection);
        dateEdit_birthDate->setCalendarPopup(false);
        dateEdit_birthDate->setDate(QDate(1990, 1, 1));

        verticalLayout_7->addWidget(dateEdit_birthDate);


        horizontalLayout_3->addLayout(verticalLayout_7);

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

        verticalLayout_6->addWidget(lineEdit_natId);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_9->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
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

        verticalLayout_5->addWidget(lineEdit_company);


        horizontalLayout_6->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_4->addWidget(label_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_2->addWidget(checkBox);

        lineEdit_jobTitle = new QLineEdit(layoutWidget);
        lineEdit_jobTitle->setObjectName(QStringLiteral("lineEdit_jobTitle"));
        lineEdit_jobTitle->setLayoutDirection(Qt::RightToLeft);
        lineEdit_jobTitle->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_jobTitle->setMaxLength(30);

        horizontalLayout_2->addWidget(lineEdit_jobTitle);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_6->addLayout(verticalLayout_4);

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

        verticalLayout_3->addWidget(lineEdit_education);


        horizontalLayout_6->addLayout(verticalLayout_3);


        verticalLayout_9->addLayout(horizontalLayout_6);

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

        verticalLayout_2->addWidget(lineEdit_mobId);


        verticalLayout_9->addLayout(verticalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_addPerson = new QPushButton(layoutWidget);
        pushButton_addPerson->setObjectName(QStringLiteral("pushButton_addPerson"));

        horizontalLayout_4->addWidget(pushButton_addPerson);

        pushButton_mainWinReturn = new QPushButton(layoutWidget);
        pushButton_mainWinReturn->setObjectName(QStringLiteral("pushButton_mainWinReturn"));

        horizontalLayout_4->addWidget(pushButton_mainWinReturn);


        verticalLayout_9->addLayout(horizontalLayout_4);


        retranslateUi(AddPerson);

        comboBox_gender->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(AddPerson);
    } // setupUi

    void retranslateUi(QDialog *AddPerson)
    {
        AddPerson->setWindowTitle(QApplication::translate("AddPerson", "\330\247\330\266\330\247\331\201\331\207 \330\264\330\256\330\265", Q_NULLPTR));
        label->setText(QApplication::translate("AddPerson", "\330\247\331\204\330\247\330\263\331\205 \330\250\330\247\331\204\331\203\330\247\331\205\331\204 (*)", Q_NULLPTR));
        lineEdit_personName->setText(QString());
        lineEdit_personName->setPlaceholderText(QApplication::translate("AddPerson", "\330\247\331\204\330\247\331\210\331\204", Q_NULLPTR));
        lineEdit_personName_2->setText(QString());
        lineEdit_personName_2->setPlaceholderText(QApplication::translate("AddPerson", "\330\247\331\204\330\247\331\210\330\263\330\267", Q_NULLPTR));
        lineEdit_personName_3->setText(QString());
        lineEdit_personName_3->setPlaceholderText(QApplication::translate("AddPerson", "\330\247\331\204\330\247\330\256\331\212\330\261", Q_NULLPTR));
        label_10->setText(QApplication::translate("AddPerson", "\330\247\331\204\330\254\331\206\330\263 (*)", Q_NULLPTR));
        comboBox_gender->clear();
        comboBox_gender->insertItems(0, QStringList()
         << QApplication::translate("AddPerson", "\330\260\331\203\330\261", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\330\247\331\206\330\253\331\212", Q_NULLPTR)
        );
        comboBox_gender->setCurrentText(QString());
        label_2->setText(QApplication::translate("AddPerson", "\331\205\330\255\331\204 \330\247\331\204\331\205\331\212\331\204\330\247\330\257", Q_NULLPTR));
        lineEdit_birthPlace->setText(QString());
        label_3->setText(QApplication::translate("AddPerson", "\330\252\330\247\330\261\331\212\330\256 \330\247\331\204\331\205\331\212\331\204\330\247\330\257", Q_NULLPTR));
        dateEdit_birthDate->setDisplayFormat(QApplication::translate("AddPerson", "d/M/yyyy", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddPerson", "\330\247\331\204\330\261\331\202\331\205 \330\247\331\204\331\202\331\210\331\205\331\212", Q_NULLPTR));
        lineEdit_natId->setText(QString());
        label_8->setText(QApplication::translate("AddPerson", "\330\247\331\204\330\264\330\261\331\203\331\207", Q_NULLPTR));
        lineEdit_company->setText(QString());
        label_7->setText(QApplication::translate("AddPerson", "\330\247\331\204\331\210\330\270\331\212\331\201\331\207", Q_NULLPTR));
        checkBox->setText(QApplication::translate("AddPerson", "\331\203\330\247\331\207\331\206", Q_NULLPTR));
        lineEdit_jobTitle->setText(QString());
        label_6->setText(QApplication::translate("AddPerson", "\330\247\331\204\331\205\330\244\331\207\331\204 \330\247\331\204\330\257\330\261\330\247\330\263\331\212", Q_NULLPTR));
        lineEdit_education->setText(QString());
        label_5->setText(QApplication::translate("AddPerson", "\330\261\331\202\331\205 \330\247\331\204\331\207\330\247\330\252\331\201", Q_NULLPTR));
        lineEdit_mobId->setText(QString());
        pushButton_addPerson->setText(QApplication::translate("AddPerson", "\330\247\330\266\330\247\331\201\331\207", Q_NULLPTR));
        pushButton_mainWinReturn->setText(QApplication::translate("AddPerson", "\330\261\330\254\331\210\330\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddPerson: public Ui_AddPerson {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPERSONVIEW_H
