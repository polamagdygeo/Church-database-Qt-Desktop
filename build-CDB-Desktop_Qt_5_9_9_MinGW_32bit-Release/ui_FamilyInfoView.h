/********************************************************************************
** Form generated from reading UI file 'FamilyInfoView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAMILYINFOVIEW_H
#define UI_FAMILYINFOVIEW_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FamilyInfoView
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_20;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_17;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label;
    QLineEdit *lineEdit_fatherName;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_2;
    QLineEdit *lineEdit_motherName;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QLineEdit *lineEdit_flatNo;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_5;
    QLineEdit *lineEdit_entranceNo;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_4;
    QLineEdit *lineEdit_buildingNo;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QLineEdit *lineEdit_blockNo;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_7;
    QLineEdit *lineEdit_neighbourhoodNo;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_6;
    QLineEdit *lineEdit_residenceType;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_19;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QTableWidget *tableWidget_children;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QTableWidget *tableWidget_resident;
    QLabel *label_11;
    QTextEdit *textEdit_note;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_goToVisits;
    QPushButton *pushButton_editFamily;
    QPushButton *pushButton_deleteFamily;
    QPushButton *pushButton_mainWinReturn_2;

    void setupUi(QDialog *FamilyInfoView)
    {
        if (FamilyInfoView->objectName().isEmpty())
            FamilyInfoView->setObjectName(QStringLiteral("FamilyInfoView"));
        FamilyInfoView->resize(445, 565);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FamilyInfoView->sizePolicy().hasHeightForWidth());
        FamilyInfoView->setSizePolicy(sizePolicy);
        FamilyInfoView->setMinimumSize(QSize(445, 565));
        FamilyInfoView->setMaximumSize(QSize(445, 565));
        FamilyInfoView->setLayoutDirection(Qt::RightToLeft);
        FamilyInfoView->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        layoutWidget = new QWidget(FamilyInfoView);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 427, 548));
        verticalLayout_20 = new QVBoxLayout(layoutWidget);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_8->addWidget(label);

        lineEdit_fatherName = new QLineEdit(layoutWidget);
        lineEdit_fatherName->setObjectName(QStringLiteral("lineEdit_fatherName"));
        lineEdit_fatherName->setFrame(false);
        lineEdit_fatherName->setReadOnly(true);

        verticalLayout_8->addWidget(lineEdit_fatherName);


        horizontalLayout_4->addLayout(verticalLayout_8);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_10->addWidget(label_2);

        lineEdit_motherName = new QLineEdit(layoutWidget);
        lineEdit_motherName->setObjectName(QStringLiteral("lineEdit_motherName"));
        lineEdit_motherName->setFrame(false);
        lineEdit_motherName->setReadOnly(true);

        verticalLayout_10->addWidget(lineEdit_motherName);


        horizontalLayout_4->addLayout(verticalLayout_10);


        verticalLayout_15->addLayout(horizontalLayout_4);


        verticalLayout_16->addLayout(verticalLayout_15);


        verticalLayout_17->addLayout(verticalLayout_16);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_6->addWidget(label_3);

        lineEdit_flatNo = new QLineEdit(layoutWidget);
        lineEdit_flatNo->setObjectName(QStringLiteral("lineEdit_flatNo"));
        lineEdit_flatNo->setLayoutDirection(Qt::RightToLeft);
        lineEdit_flatNo->setMaxLength(3);
        lineEdit_flatNo->setFrame(false);
        lineEdit_flatNo->setReadOnly(true);

        verticalLayout_6->addWidget(lineEdit_flatNo);


        horizontalLayout_6->addLayout(verticalLayout_6);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_12->addWidget(label_5);

        lineEdit_entranceNo = new QLineEdit(layoutWidget);
        lineEdit_entranceNo->setObjectName(QStringLiteral("lineEdit_entranceNo"));
        lineEdit_entranceNo->setMaxLength(3);
        lineEdit_entranceNo->setFrame(false);
        lineEdit_entranceNo->setReadOnly(true);

        verticalLayout_12->addWidget(lineEdit_entranceNo);


        horizontalLayout_6->addLayout(verticalLayout_12);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_7->addWidget(label_4);

        lineEdit_buildingNo = new QLineEdit(layoutWidget);
        lineEdit_buildingNo->setObjectName(QStringLiteral("lineEdit_buildingNo"));
        lineEdit_buildingNo->setMaxLength(3);
        lineEdit_buildingNo->setFrame(false);
        lineEdit_buildingNo->setReadOnly(true);

        verticalLayout_7->addWidget(lineEdit_buildingNo);


        horizontalLayout_6->addLayout(verticalLayout_7);


        verticalLayout_14->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_5->addWidget(label_8);

        lineEdit_blockNo = new QLineEdit(layoutWidget);
        lineEdit_blockNo->setObjectName(QStringLiteral("lineEdit_blockNo"));
        lineEdit_blockNo->setMaxLength(3);
        lineEdit_blockNo->setFrame(false);
        lineEdit_blockNo->setReadOnly(true);

        verticalLayout_5->addWidget(lineEdit_blockNo);


        horizontalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_13->addWidget(label_7);

        lineEdit_neighbourhoodNo = new QLineEdit(layoutWidget);
        lineEdit_neighbourhoodNo->setObjectName(QStringLiteral("lineEdit_neighbourhoodNo"));
        lineEdit_neighbourhoodNo->setMaxLength(3);
        lineEdit_neighbourhoodNo->setFrame(false);
        lineEdit_neighbourhoodNo->setReadOnly(true);

        verticalLayout_13->addWidget(lineEdit_neighbourhoodNo);


        horizontalLayout_7->addLayout(verticalLayout_13);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_11->addWidget(label_6);

        lineEdit_residenceType = new QLineEdit(layoutWidget);
        lineEdit_residenceType->setObjectName(QStringLiteral("lineEdit_residenceType"));
        lineEdit_residenceType->setFrame(false);
        lineEdit_residenceType->setReadOnly(true);

        verticalLayout_11->addWidget(lineEdit_residenceType);


        horizontalLayout_7->addLayout(verticalLayout_11);


        verticalLayout_14->addLayout(horizontalLayout_7);


        verticalLayout_17->addLayout(verticalLayout_14);


        verticalLayout_18->addLayout(verticalLayout_17);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_4->addWidget(label_9);

        tableWidget_children = new QTableWidget(layoutWidget);
        tableWidget_children->setObjectName(QStringLiteral("tableWidget_children"));
        tableWidget_children->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_children->setAlternatingRowColors(true);
        tableWidget_children->horizontalHeader()->setVisible(false);
        tableWidget_children->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_4->addWidget(tableWidget_children);


        verticalLayout_19->addLayout(verticalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));

        verticalLayout_19->addLayout(horizontalLayout_8);


        horizontalLayout_12->addLayout(verticalLayout_19);


        verticalLayout_18->addLayout(horizontalLayout_12);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_18->addWidget(label_10);

        tableWidget_resident = new QTableWidget(layoutWidget);
        tableWidget_resident->setObjectName(QStringLiteral("tableWidget_resident"));
        tableWidget_resident->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_resident->setAlternatingRowColors(true);
        tableWidget_resident->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_18->addWidget(tableWidget_resident);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_18->addWidget(label_11);

        textEdit_note = new QTextEdit(layoutWidget);
        textEdit_note->setObjectName(QStringLiteral("textEdit_note"));
        textEdit_note->setLayoutDirection(Qt::RightToLeft);
        textEdit_note->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        textEdit_note->setReadOnly(true);

        verticalLayout_18->addWidget(textEdit_note);


        verticalLayout_20->addLayout(verticalLayout_18);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        pushButton_goToVisits = new QPushButton(layoutWidget);
        pushButton_goToVisits->setObjectName(QStringLiteral("pushButton_goToVisits"));

        horizontalLayout_10->addWidget(pushButton_goToVisits);

        pushButton_editFamily = new QPushButton(layoutWidget);
        pushButton_editFamily->setObjectName(QStringLiteral("pushButton_editFamily"));

        horizontalLayout_10->addWidget(pushButton_editFamily);

        pushButton_deleteFamily = new QPushButton(layoutWidget);
        pushButton_deleteFamily->setObjectName(QStringLiteral("pushButton_deleteFamily"));

        horizontalLayout_10->addWidget(pushButton_deleteFamily);

        pushButton_mainWinReturn_2 = new QPushButton(layoutWidget);
        pushButton_mainWinReturn_2->setObjectName(QStringLiteral("pushButton_mainWinReturn_2"));

        horizontalLayout_10->addWidget(pushButton_mainWinReturn_2);


        verticalLayout_20->addLayout(horizontalLayout_10);


        retranslateUi(FamilyInfoView);

        QMetaObject::connectSlotsByName(FamilyInfoView);
    } // setupUi

    void retranslateUi(QDialog *FamilyInfoView)
    {
        FamilyInfoView->setWindowTitle(QApplication::translate("FamilyInfoView", "\330\250\331\212\330\247\331\206\330\247\330\252 \330\247\331\204\330\271\330\247\330\246\331\204\331\207", Q_NULLPTR));
        label->setText(QApplication::translate("FamilyInfoView", "\330\247\330\263\331\205 \330\247\331\204\330\262\331\210\330\254", Q_NULLPTR));
        label_2->setText(QApplication::translate("FamilyInfoView", "\330\247\330\263\331\205 \330\247\331\204\330\262\331\210\330\254\331\207", Q_NULLPTR));
        label_3->setText(QApplication::translate("FamilyInfoView", "\330\264\331\202\331\207", Q_NULLPTR));
        lineEdit_flatNo->setText(QString());
        label_5->setText(QApplication::translate("FamilyInfoView", "\331\205\330\257\330\256\331\204/\331\205\330\261\330\250\330\271", Q_NULLPTR));
        lineEdit_entranceNo->setText(QString());
        label_4->setText(QApplication::translate("FamilyInfoView", "\330\271\331\205\330\247\330\261\331\207", Q_NULLPTR));
        lineEdit_buildingNo->setText(QString());
        label_8->setText(QApplication::translate("FamilyInfoView", "\331\202\330\267\330\271\331\207", Q_NULLPTR));
        lineEdit_blockNo->setText(QString());
        label_7->setText(QApplication::translate("FamilyInfoView", "\330\247\331\204\331\205\330\254\330\247\331\210\330\261\331\207", Q_NULLPTR));
        lineEdit_neighbourhoodNo->setText(QString());
        label_6->setText(QApplication::translate("FamilyInfoView", "\331\206\331\210\330\271 \330\247\331\204\330\263\331\203\331\206", Q_NULLPTR));
        lineEdit_residenceType->setText(QString());
        label_9->setText(QApplication::translate("FamilyInfoView", "\330\247\331\204\330\247\330\250\331\206\330\247\330\241", Q_NULLPTR));
        label_10->setText(QApplication::translate("FamilyInfoView", "\330\247\331\204\331\205\330\263\330\252\330\266\330\247\331\201\331\212\331\206", Q_NULLPTR));
        label_11->setText(QApplication::translate("FamilyInfoView", "\331\205\331\204\330\247\330\255\330\270\330\247\330\252", Q_NULLPTR));
        textEdit_note->setHtml(QApplication::translate("FamilyInfoView", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        textEdit_note->setPlaceholderText(QString());
        pushButton_goToVisits->setText(QApplication::translate("FamilyInfoView", "\330\247\331\204\330\247\331\201\330\252\331\202\330\247\330\257", Q_NULLPTR));
        pushButton_editFamily->setText(QApplication::translate("FamilyInfoView", "\330\252\330\271\330\257\331\212\331\204", Q_NULLPTR));
        pushButton_deleteFamily->setText(QApplication::translate("FamilyInfoView", "\330\255\330\260\331\201", Q_NULLPTR));
        pushButton_mainWinReturn_2->setText(QApplication::translate("FamilyInfoView", "\330\261\330\254\331\210\330\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FamilyInfoView: public Ui_FamilyInfoView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAMILYINFOVIEW_H
