/********************************************************************************
** Form generated from reading UI file 'AddFamilyView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFAMILYVIEW_H
#define UI_ADDFAMILYVIEW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddFamilyView
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
    QComboBox *comboBox_fatherName;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_2;
    QComboBox *comboBox_motherName;
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
    QComboBox *comboBox_toAddChildName;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_addChild;
    QVBoxLayout *verticalLayout_24;
    QVBoxLayout *verticalLayout_22;
    QLabel *label_12;
    QComboBox *comboBox_toDeleteChildName;
    QPushButton *pushButton_deleteChild;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_10;
    QComboBox *comboBox_toAddResidentName;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_11;
    QLineEdit *lineEdit_residentRelation;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_addResident;
    QVBoxLayout *verticalLayout_25;
    QVBoxLayout *verticalLayout_23;
    QLabel *label_13;
    QComboBox *comboBox_toDeleteResidentName;
    QPushButton *pushButton_deleteResident;
    QTextEdit *textEdit_note;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_addFamily;
    QPushButton *pushButton_mainWinReturn_2;

    void setupUi(QDialog *AddFamilyView)
    {
        if (AddFamilyView->objectName().isEmpty())
            AddFamilyView->setObjectName(QStringLiteral("AddFamilyView"));
        AddFamilyView->resize(446, 565);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddFamilyView->sizePolicy().hasHeightForWidth());
        AddFamilyView->setSizePolicy(sizePolicy);
        AddFamilyView->setMaximumSize(QSize(446, 565));
        AddFamilyView->setLayoutDirection(Qt::RightToLeft);
        AddFamilyView->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        layoutWidget = new QWidget(AddFamilyView);
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

        comboBox_fatherName = new QComboBox(layoutWidget);
        comboBox_fatherName->setObjectName(QStringLiteral("comboBox_fatherName"));
        comboBox_fatherName->setEditable(true);
        comboBox_fatherName->setInsertPolicy(QComboBox::InsertAtBottom);

        verticalLayout_8->addWidget(comboBox_fatherName);


        horizontalLayout_4->addLayout(verticalLayout_8);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_10->addWidget(label_2);

        comboBox_motherName = new QComboBox(layoutWidget);
        comboBox_motherName->setObjectName(QStringLiteral("comboBox_motherName"));
        comboBox_motherName->setEditable(true);

        verticalLayout_10->addWidget(comboBox_motherName);


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

        verticalLayout_13->addWidget(lineEdit_neighbourhoodNo);


        horizontalLayout_7->addLayout(verticalLayout_13);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_11->addWidget(label_6);

        lineEdit_residenceType = new QLineEdit(layoutWidget);
        lineEdit_residenceType->setObjectName(QStringLiteral("lineEdit_residenceType"));

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

        comboBox_toAddChildName = new QComboBox(layoutWidget);
        comboBox_toAddChildName->setObjectName(QStringLiteral("comboBox_toAddChildName"));
        comboBox_toAddChildName->setEnabled(true);
        comboBox_toAddChildName->setLayoutDirection(Qt::RightToLeft);
        comboBox_toAddChildName->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        comboBox_toAddChildName->setEditable(true);
        comboBox_toAddChildName->setInsertPolicy(QComboBox::InsertAtBottom);

        verticalLayout_4->addWidget(comboBox_toAddChildName);


        verticalLayout_19->addLayout(verticalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        pushButton_addChild = new QPushButton(layoutWidget);
        pushButton_addChild->setObjectName(QStringLiteral("pushButton_addChild"));

        horizontalLayout_8->addWidget(pushButton_addChild);


        verticalLayout_19->addLayout(horizontalLayout_8);


        horizontalLayout_12->addLayout(verticalLayout_19);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_22->addWidget(label_12);

        comboBox_toDeleteChildName = new QComboBox(layoutWidget);
        comboBox_toDeleteChildName->setObjectName(QStringLiteral("comboBox_toDeleteChildName"));
        comboBox_toDeleteChildName->setLayoutDirection(Qt::RightToLeft);
        comboBox_toDeleteChildName->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        comboBox_toDeleteChildName->setEditable(true);

        verticalLayout_22->addWidget(comboBox_toDeleteChildName);


        verticalLayout_24->addLayout(verticalLayout_22);

        pushButton_deleteChild = new QPushButton(layoutWidget);
        pushButton_deleteChild->setObjectName(QStringLiteral("pushButton_deleteChild"));

        verticalLayout_24->addWidget(pushButton_deleteChild);


        horizontalLayout_12->addLayout(verticalLayout_24);


        verticalLayout_18->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_9->addWidget(label_10);

        comboBox_toAddResidentName = new QComboBox(layoutWidget);
        comboBox_toAddResidentName->setObjectName(QStringLiteral("comboBox_toAddResidentName"));
        comboBox_toAddResidentName->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_toAddResidentName->sizePolicy().hasHeightForWidth());
        comboBox_toAddResidentName->setSizePolicy(sizePolicy1);
        comboBox_toAddResidentName->setEditable(true);
        comboBox_toAddResidentName->setInsertPolicy(QComboBox::InsertAtBottom);

        verticalLayout_9->addWidget(comboBox_toAddResidentName);


        horizontalLayout_11->addLayout(verticalLayout_9);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_3->addWidget(label_11);

        lineEdit_residentRelation = new QLineEdit(layoutWidget);
        lineEdit_residentRelation->setObjectName(QStringLiteral("lineEdit_residentRelation"));
        lineEdit_residentRelation->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_residentRelation->sizePolicy().hasHeightForWidth());
        lineEdit_residentRelation->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(lineEdit_residentRelation);


        horizontalLayout_11->addLayout(verticalLayout_3);


        verticalLayout_21->addLayout(horizontalLayout_11);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        pushButton_addResident = new QPushButton(layoutWidget);
        pushButton_addResident->setObjectName(QStringLiteral("pushButton_addResident"));

        horizontalLayout_9->addWidget(pushButton_addResident);


        verticalLayout_21->addLayout(horizontalLayout_9);


        horizontalLayout_13->addLayout(verticalLayout_21);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_23->addWidget(label_13);

        comboBox_toDeleteResidentName = new QComboBox(layoutWidget);
        comboBox_toDeleteResidentName->setObjectName(QStringLiteral("comboBox_toDeleteResidentName"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBox_toDeleteResidentName->sizePolicy().hasHeightForWidth());
        comboBox_toDeleteResidentName->setSizePolicy(sizePolicy3);
        comboBox_toDeleteResidentName->setEditable(true);

        verticalLayout_23->addWidget(comboBox_toDeleteResidentName);


        verticalLayout_25->addLayout(verticalLayout_23);

        pushButton_deleteResident = new QPushButton(layoutWidget);
        pushButton_deleteResident->setObjectName(QStringLiteral("pushButton_deleteResident"));

        verticalLayout_25->addWidget(pushButton_deleteResident);


        horizontalLayout_13->addLayout(verticalLayout_25);


        verticalLayout_18->addLayout(horizontalLayout_13);

        textEdit_note = new QTextEdit(layoutWidget);
        textEdit_note->setObjectName(QStringLiteral("textEdit_note"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(textEdit_note->sizePolicy().hasHeightForWidth());
        textEdit_note->setSizePolicy(sizePolicy4);
        textEdit_note->setMaximumSize(QSize(16777215, 16770000));
        textEdit_note->setLayoutDirection(Qt::RightToLeft);
        textEdit_note->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        textEdit_note->setAutoFormatting(QTextEdit::AutoAll);

        verticalLayout_18->addWidget(textEdit_note);


        verticalLayout_20->addLayout(verticalLayout_18);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        pushButton_addFamily = new QPushButton(layoutWidget);
        pushButton_addFamily->setObjectName(QStringLiteral("pushButton_addFamily"));

        horizontalLayout_10->addWidget(pushButton_addFamily);

        pushButton_mainWinReturn_2 = new QPushButton(layoutWidget);
        pushButton_mainWinReturn_2->setObjectName(QStringLiteral("pushButton_mainWinReturn_2"));

        horizontalLayout_10->addWidget(pushButton_mainWinReturn_2);


        verticalLayout_20->addLayout(horizontalLayout_10);


        retranslateUi(AddFamilyView);

        comboBox_fatherName->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(AddFamilyView);
    } // setupUi

    void retranslateUi(QDialog *AddFamilyView)
    {
        AddFamilyView->setWindowTitle(QApplication::translate("AddFamilyView", "\330\247\330\266\330\247\331\201\331\207 \330\271\330\247\330\246\331\204\331\207", Q_NULLPTR));
        label->setText(QApplication::translate("AddFamilyView", "\330\247\330\263\331\205 \330\247\331\204\330\262\331\210\330\254 (*)", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddFamilyView", "\330\247\330\263\331\205 \330\247\331\204\330\262\331\210\330\254\331\207 (*)", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddFamilyView", "\330\264\331\202\331\207 (*)", Q_NULLPTR));
        lineEdit_flatNo->setText(QString());
        label_5->setText(QApplication::translate("AddFamilyView", "\331\205\330\257\330\256\331\204/\331\205\330\261\330\250\330\271 (*)", Q_NULLPTR));
        lineEdit_entranceNo->setText(QString());
        label_4->setText(QApplication::translate("AddFamilyView", "\330\271\331\205\330\247\330\261\331\207 (*)", Q_NULLPTR));
        lineEdit_buildingNo->setText(QString());
        label_8->setText(QApplication::translate("AddFamilyView", "\331\202\330\267\330\271\331\207 (*)", Q_NULLPTR));
        lineEdit_blockNo->setText(QString());
        label_7->setText(QApplication::translate("AddFamilyView", "\330\247\331\204\331\205\330\254\330\247\331\210\330\261\331\207 (*)", Q_NULLPTR));
        lineEdit_neighbourhoodNo->setText(QString());
        label_6->setText(QApplication::translate("AddFamilyView", "\331\206\331\210\330\271 \330\247\331\204\330\263\331\203\331\206", Q_NULLPTR));
        lineEdit_residenceType->setText(QString());
        label_9->setText(QApplication::translate("AddFamilyView", "\330\247\330\263\331\205 \330\247\331\204\330\247\330\250\331\206 / \330\247\331\204\330\247\330\250\331\206\331\207", Q_NULLPTR));
        pushButton_addChild->setText(QApplication::translate("AddFamilyView", "\330\247\330\266\330\247\331\201\331\207 \330\247\330\250\331\206\330\247\330\241", Q_NULLPTR));
        label_12->setText(QApplication::translate("AddFamilyView", "\330\247\330\263\331\205\330\247\330\241 \330\247\331\204\330\247\330\250\331\206\330\247\330\241 \330\247\331\204\331\205\330\266\330\247\331\201\331\207", Q_NULLPTR));
        pushButton_deleteChild->setText(QApplication::translate("AddFamilyView", "\330\255\330\260\331\201", Q_NULLPTR));
        label_10->setText(QApplication::translate("AddFamilyView", "\330\247\330\263\331\205 \330\247\331\204\331\205\330\263\330\252\330\266\330\247\331\201", Q_NULLPTR));
        label_11->setText(QApplication::translate("AddFamilyView", "\331\206\331\210\330\271 \330\247\331\204\331\202\330\261\330\247\330\250\331\207", Q_NULLPTR));
        lineEdit_residentRelation->setText(QString());
        pushButton_addResident->setText(QApplication::translate("AddFamilyView", "\330\247\330\266\330\247\331\201\331\207 \331\205\330\263\330\252\330\266\330\247\331\201", Q_NULLPTR));
        label_13->setText(QApplication::translate("AddFamilyView", "\330\247\330\263\331\205\330\247\330\241 \330\247\331\204\331\205\330\263\330\252\330\266\330\247\331\201\331\212\331\206 \330\247\331\204\331\205\330\266\330\247\331\201\331\207", Q_NULLPTR));
        pushButton_deleteResident->setText(QApplication::translate("AddFamilyView", "\330\255\330\260\331\201", Q_NULLPTR));
        textEdit_note->setHtml(QApplication::translate("AddFamilyView", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        textEdit_note->setPlaceholderText(QApplication::translate("AddFamilyView", "\331\205\331\204\330\247\330\255\330\270\330\247\330\252", Q_NULLPTR));
        pushButton_addFamily->setText(QApplication::translate("AddFamilyView", "\330\247\330\266\330\247\331\201\331\207", Q_NULLPTR));
        pushButton_mainWinReturn_2->setText(QApplication::translate("AddFamilyView", "\330\261\330\254\331\210\330\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddFamilyView: public Ui_AddFamilyView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFAMILYVIEW_H
