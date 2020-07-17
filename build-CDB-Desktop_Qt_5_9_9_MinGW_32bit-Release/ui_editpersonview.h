/********************************************************************************
** Form generated from reading UI file 'editpersonview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPERSONVIEW_H
#define UI_EDITPERSONVIEW_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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

class Ui_EditPersonView
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_26;
    QLabel *label_20;
    QLineEdit *lineEdit_personGender;
    QVBoxLayout *verticalLayout_25;
    QLabel *label_19;
    QLineEdit *lineEdit_personName_3;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_30;
    QLabel *label_24;
    QLineEdit *lineEdit_natId_3;
    QVBoxLayout *verticalLayout_29;
    QLabel *label_23;
    QDateEdit *dateEdit_birthDate_3;
    QVBoxLayout *verticalLayout_28;
    QLabel *label_22;
    QLineEdit *lineEdit_birthPlace_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_33;
    QLabel *label_27;
    QLineEdit *lineEdit_company_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_26;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_jobTitle_3;
    QCheckBox *checkBox;
    QVBoxLayout *verticalLayout_31;
    QLabel *label_25;
    QLineEdit *lineEdit_education_3;
    QVBoxLayout *verticalLayout_34;
    QLabel *label_28;
    QLineEdit *lineEdit_mobId_3;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_mainWinReturn_3;
    QPushButton *pushButton_editPerson;

    void setupUi(QDialog *EditPersonView)
    {
        if (EditPersonView->objectName().isEmpty())
            EditPersonView->setObjectName(QStringLiteral("EditPersonView"));
        EditPersonView->resize(494, 244);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditPersonView->sizePolicy().hasHeightForWidth());
        EditPersonView->setSizePolicy(sizePolicy);
        EditPersonView->setMinimumSize(QSize(494, 244));
        EditPersonView->setMaximumSize(QSize(494, 244));
        layoutWidget = new QWidget(EditPersonView);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 12, 476, 223));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QStringLiteral("label_20"));

        verticalLayout_26->addWidget(label_20);

        lineEdit_personGender = new QLineEdit(layoutWidget);
        lineEdit_personGender->setObjectName(QStringLiteral("lineEdit_personGender"));
        lineEdit_personGender->setFrame(false);
        lineEdit_personGender->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_personGender->setReadOnly(true);

        verticalLayout_26->addWidget(lineEdit_personGender);


        horizontalLayout_9->addLayout(verticalLayout_26);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName(QStringLiteral("label_19"));

        verticalLayout_25->addWidget(label_19);

        lineEdit_personName_3 = new QLineEdit(layoutWidget);
        lineEdit_personName_3->setObjectName(QStringLiteral("lineEdit_personName_3"));
        lineEdit_personName_3->setEnabled(true);
        lineEdit_personName_3->setLayoutDirection(Qt::RightToLeft);
        lineEdit_personName_3->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_personName_3->setMaxLength(50);
        lineEdit_personName_3->setFrame(false);
        lineEdit_personName_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_personName_3->setReadOnly(true);

        verticalLayout_25->addWidget(lineEdit_personName_3);


        horizontalLayout_9->addLayout(verticalLayout_25);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_30 = new QVBoxLayout();
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        label_24 = new QLabel(layoutWidget);
        label_24->setObjectName(QStringLiteral("label_24"));

        verticalLayout_30->addWidget(label_24);

        lineEdit_natId_3 = new QLineEdit(layoutWidget);
        lineEdit_natId_3->setObjectName(QStringLiteral("lineEdit_natId_3"));
        lineEdit_natId_3->setLayoutDirection(Qt::RightToLeft);
        lineEdit_natId_3->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_natId_3->setMaxLength(14);
        lineEdit_natId_3->setFrame(true);
        lineEdit_natId_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_natId_3->setReadOnly(false);

        verticalLayout_30->addWidget(lineEdit_natId_3);


        horizontalLayout_10->addLayout(verticalLayout_30);

        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        label_23 = new QLabel(layoutWidget);
        label_23->setObjectName(QStringLiteral("label_23"));

        verticalLayout_29->addWidget(label_23);

        dateEdit_birthDate_3 = new QDateEdit(layoutWidget);
        dateEdit_birthDate_3->setObjectName(QStringLiteral("dateEdit_birthDate_3"));
        dateEdit_birthDate_3->setLayoutDirection(Qt::LeftToRight);
        dateEdit_birthDate_3->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        dateEdit_birthDate_3->setWrapping(true);
        dateEdit_birthDate_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEdit_birthDate_3->setProperty("showGroupSeparator", QVariant(false));
        dateEdit_birthDate_3->setCurrentSection(QDateTimeEdit::DaySection);
        dateEdit_birthDate_3->setCalendarPopup(false);
        dateEdit_birthDate_3->setDate(QDate(1990, 1, 1));

        verticalLayout_29->addWidget(dateEdit_birthDate_3);


        horizontalLayout_10->addLayout(verticalLayout_29);

        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName(QStringLiteral("label_22"));

        verticalLayout_28->addWidget(label_22);

        lineEdit_birthPlace_3 = new QLineEdit(layoutWidget);
        lineEdit_birthPlace_3->setObjectName(QStringLiteral("lineEdit_birthPlace_3"));
        lineEdit_birthPlace_3->setLayoutDirection(Qt::RightToLeft);
        lineEdit_birthPlace_3->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_birthPlace_3->setMaxLength(30);
        lineEdit_birthPlace_3->setFrame(true);
        lineEdit_birthPlace_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_birthPlace_3->setReadOnly(false);

        verticalLayout_28->addWidget(lineEdit_birthPlace_3);


        horizontalLayout_10->addLayout(verticalLayout_28);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_33 = new QVBoxLayout();
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        label_27 = new QLabel(layoutWidget);
        label_27->setObjectName(QStringLiteral("label_27"));

        verticalLayout_33->addWidget(label_27);

        lineEdit_company_3 = new QLineEdit(layoutWidget);
        lineEdit_company_3->setObjectName(QStringLiteral("lineEdit_company_3"));
        lineEdit_company_3->setLayoutDirection(Qt::RightToLeft);
        lineEdit_company_3->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_company_3->setMaxLength(30);
        lineEdit_company_3->setFrame(true);
        lineEdit_company_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_company_3->setReadOnly(false);

        verticalLayout_33->addWidget(lineEdit_company_3);


        horizontalLayout_2->addLayout(verticalLayout_33);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_26 = new QLabel(layoutWidget);
        label_26->setObjectName(QStringLiteral("label_26"));

        verticalLayout->addWidget(label_26);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_jobTitle_3 = new QLineEdit(layoutWidget);
        lineEdit_jobTitle_3->setObjectName(QStringLiteral("lineEdit_jobTitle_3"));
        lineEdit_jobTitle_3->setLayoutDirection(Qt::RightToLeft);
        lineEdit_jobTitle_3->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_jobTitle_3->setMaxLength(30);
        lineEdit_jobTitle_3->setFrame(true);
        lineEdit_jobTitle_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_jobTitle_3->setReadOnly(false);

        horizontalLayout->addWidget(lineEdit_jobTitle_3);

        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        label_25 = new QLabel(layoutWidget);
        label_25->setObjectName(QStringLiteral("label_25"));

        verticalLayout_31->addWidget(label_25);

        lineEdit_education_3 = new QLineEdit(layoutWidget);
        lineEdit_education_3->setObjectName(QStringLiteral("lineEdit_education_3"));
        lineEdit_education_3->setLayoutDirection(Qt::RightToLeft);
        lineEdit_education_3->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_education_3->setMaxLength(30);
        lineEdit_education_3->setFrame(true);
        lineEdit_education_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_education_3->setReadOnly(false);

        verticalLayout_31->addWidget(lineEdit_education_3);


        horizontalLayout_2->addLayout(verticalLayout_31);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_34 = new QVBoxLayout();
        verticalLayout_34->setObjectName(QStringLiteral("verticalLayout_34"));
        label_28 = new QLabel(layoutWidget);
        label_28->setObjectName(QStringLiteral("label_28"));

        verticalLayout_34->addWidget(label_28);

        lineEdit_mobId_3 = new QLineEdit(layoutWidget);
        lineEdit_mobId_3->setObjectName(QStringLiteral("lineEdit_mobId_3"));
        lineEdit_mobId_3->setLayoutDirection(Qt::RightToLeft);
        lineEdit_mobId_3->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        lineEdit_mobId_3->setMaxLength(11);
        lineEdit_mobId_3->setFrame(true);
        lineEdit_mobId_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_mobId_3->setReadOnly(false);

        verticalLayout_34->addWidget(lineEdit_mobId_3);


        verticalLayout_2->addLayout(verticalLayout_34);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        pushButton_mainWinReturn_3 = new QPushButton(layoutWidget);
        pushButton_mainWinReturn_3->setObjectName(QStringLiteral("pushButton_mainWinReturn_3"));

        horizontalLayout_12->addWidget(pushButton_mainWinReturn_3);

        pushButton_editPerson = new QPushButton(layoutWidget);
        pushButton_editPerson->setObjectName(QStringLiteral("pushButton_editPerson"));

        horizontalLayout_12->addWidget(pushButton_editPerson);


        verticalLayout_2->addLayout(horizontalLayout_12);


        retranslateUi(EditPersonView);

        QMetaObject::connectSlotsByName(EditPersonView);
    } // setupUi

    void retranslateUi(QDialog *EditPersonView)
    {
        EditPersonView->setWindowTitle(QApplication::translate("EditPersonView", "\330\252\330\271\330\257\331\212\331\204 \330\250\331\212\330\247\331\206\330\247\330\252 \330\264\330\256\330\265", Q_NULLPTR));
        label_20->setText(QApplication::translate("EditPersonView", "\330\247\331\204\330\254\331\206\330\263", Q_NULLPTR));
        label_19->setText(QApplication::translate("EditPersonView", "\330\247\331\204\330\247\330\263\331\205 \330\250\330\247\331\204\331\203\330\247\331\205\331\204", Q_NULLPTR));
        lineEdit_personName_3->setText(QString());
        label_24->setText(QApplication::translate("EditPersonView", "\330\247\331\204\330\261\331\202\331\205 \330\247\331\204\331\202\331\210\331\205\331\212", Q_NULLPTR));
        lineEdit_natId_3->setText(QString());
        label_23->setText(QApplication::translate("EditPersonView", "\330\252\330\247\330\261\331\212\330\256 \330\247\331\204\331\205\331\212\331\204\330\247\330\257", Q_NULLPTR));
        dateEdit_birthDate_3->setDisplayFormat(QApplication::translate("EditPersonView", "d/M/yyyy", Q_NULLPTR));
        label_22->setText(QApplication::translate("EditPersonView", "\331\205\330\255\331\204 \330\247\331\204\331\205\331\212\331\204\330\247\330\257", Q_NULLPTR));
        lineEdit_birthPlace_3->setText(QString());
        label_27->setText(QApplication::translate("EditPersonView", "\330\247\331\204\330\264\330\261\331\203\331\207", Q_NULLPTR));
        lineEdit_company_3->setText(QString());
        label_26->setText(QApplication::translate("EditPersonView", "\330\247\331\204\331\210\330\270\331\212\331\201\331\207", Q_NULLPTR));
        lineEdit_jobTitle_3->setText(QString());
        checkBox->setText(QApplication::translate("EditPersonView", "\331\203\330\247\331\207\331\206", Q_NULLPTR));
        label_25->setText(QApplication::translate("EditPersonView", "\330\247\331\204\331\205\330\244\331\207\331\204 \330\247\331\204\330\257\330\261\330\247\330\263\331\212", Q_NULLPTR));
        lineEdit_education_3->setText(QString());
        label_28->setText(QApplication::translate("EditPersonView", "\330\261\331\202\331\205 \330\247\331\204\331\207\330\247\330\252\331\201", Q_NULLPTR));
        lineEdit_mobId_3->setText(QString());
        pushButton_mainWinReturn_3->setText(QApplication::translate("EditPersonView", "\330\261\330\254\331\210\330\271", Q_NULLPTR));
        pushButton_editPerson->setText(QApplication::translate("EditPersonView", "\330\255\331\201\330\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditPersonView: public Ui_EditPersonView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPERSONVIEW_H
