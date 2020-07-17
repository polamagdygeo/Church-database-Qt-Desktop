/********************************************************************************
** Form generated from reading UI file 'EditFamilyView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITFAMILYVIEW_H
#define UI_EDITFAMILYVIEW_H

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

class Ui_EditFamilyView
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_49;
    QVBoxLayout *verticalLayout_50;
    QVBoxLayout *verticalLayout_51;
    QVBoxLayout *verticalLayout_52;
    QVBoxLayout *verticalLayout_53;
    QHBoxLayout *horizontalLayout_22;
    QVBoxLayout *verticalLayout_54;
    QLabel *label_27;
    QLineEdit *lineEdit_fatherName;
    QVBoxLayout *verticalLayout_55;
    QLabel *label_28;
    QLineEdit *lineEdit_motherName;
    QVBoxLayout *verticalLayout_56;
    QHBoxLayout *horizontalLayout_23;
    QVBoxLayout *verticalLayout_57;
    QLabel *label_29;
    QLineEdit *lineEdit_flatNo_3;
    QVBoxLayout *verticalLayout_58;
    QLabel *label_30;
    QLineEdit *lineEdit_entranceNo_3;
    QVBoxLayout *verticalLayout_59;
    QLabel *label_31;
    QLineEdit *lineEdit_buildingNo_3;
    QHBoxLayout *horizontalLayout_24;
    QVBoxLayout *verticalLayout_60;
    QLabel *label_32;
    QLineEdit *lineEdit_blockNo_3;
    QVBoxLayout *verticalLayout_61;
    QLabel *label_33;
    QLineEdit *lineEdit_neighbourhoodNo_3;
    QVBoxLayout *verticalLayout_62;
    QLabel *label_34;
    QLineEdit *lineEdit_residenceType_3;
    QHBoxLayout *horizontalLayout_25;
    QVBoxLayout *verticalLayout_63;
    QVBoxLayout *verticalLayout_64;
    QLabel *label_35;
    QComboBox *comboBox_toAddChildName_3;
    QHBoxLayout *horizontalLayout_26;
    QPushButton *pushButton_addChild_3;
    QVBoxLayout *verticalLayout_65;
    QVBoxLayout *verticalLayout_66;
    QLabel *label_36;
    QComboBox *comboBox_toDeleteChildName_3;
    QPushButton *pushButton_deleteChild_3;
    QHBoxLayout *horizontalLayout_27;
    QVBoxLayout *verticalLayout_67;
    QHBoxLayout *horizontalLayout_28;
    QVBoxLayout *verticalLayout_68;
    QLabel *label_37;
    QComboBox *comboBox_toAddResidentName_3;
    QVBoxLayout *verticalLayout_69;
    QLabel *label_38;
    QLineEdit *lineEdit_residentRelation_3;
    QHBoxLayout *horizontalLayout_29;
    QPushButton *pushButton_addResident_3;
    QVBoxLayout *verticalLayout_70;
    QVBoxLayout *verticalLayout_71;
    QLabel *label_39;
    QComboBox *comboBox_toDeleteResidentName_3;
    QPushButton *pushButton_deleteResident_3;
    QTextEdit *textEdit_note_3;
    QHBoxLayout *horizontalLayout_30;
    QPushButton *pushButton_applyFamilyEdit;
    QPushButton *pushButton_mainWinReturn_4;

    void setupUi(QDialog *EditFamilyView)
    {
        if (EditFamilyView->objectName().isEmpty())
            EditFamilyView->setObjectName(QStringLiteral("EditFamilyView"));
        EditFamilyView->resize(449, 567);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditFamilyView->sizePolicy().hasHeightForWidth());
        EditFamilyView->setSizePolicy(sizePolicy);
        EditFamilyView->setMaximumSize(QSize(449, 567));
        EditFamilyView->setLayoutDirection(Qt::RightToLeft);
        layoutWidget = new QWidget(EditFamilyView);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 427, 548));
        verticalLayout_49 = new QVBoxLayout(layoutWidget);
        verticalLayout_49->setObjectName(QStringLiteral("verticalLayout_49"));
        verticalLayout_49->setContentsMargins(0, 0, 0, 0);
        verticalLayout_50 = new QVBoxLayout();
        verticalLayout_50->setObjectName(QStringLiteral("verticalLayout_50"));
        verticalLayout_51 = new QVBoxLayout();
        verticalLayout_51->setObjectName(QStringLiteral("verticalLayout_51"));
        verticalLayout_52 = new QVBoxLayout();
        verticalLayout_52->setObjectName(QStringLiteral("verticalLayout_52"));
        verticalLayout_53 = new QVBoxLayout();
        verticalLayout_53->setObjectName(QStringLiteral("verticalLayout_53"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        verticalLayout_54 = new QVBoxLayout();
        verticalLayout_54->setObjectName(QStringLiteral("verticalLayout_54"));
        label_27 = new QLabel(layoutWidget);
        label_27->setObjectName(QStringLiteral("label_27"));

        verticalLayout_54->addWidget(label_27);

        lineEdit_fatherName = new QLineEdit(layoutWidget);
        lineEdit_fatherName->setObjectName(QStringLiteral("lineEdit_fatherName"));
        lineEdit_fatherName->setFrame(false);
        lineEdit_fatherName->setReadOnly(true);

        verticalLayout_54->addWidget(lineEdit_fatherName);


        horizontalLayout_22->addLayout(verticalLayout_54);

        verticalLayout_55 = new QVBoxLayout();
        verticalLayout_55->setObjectName(QStringLiteral("verticalLayout_55"));
        label_28 = new QLabel(layoutWidget);
        label_28->setObjectName(QStringLiteral("label_28"));

        verticalLayout_55->addWidget(label_28);

        lineEdit_motherName = new QLineEdit(layoutWidget);
        lineEdit_motherName->setObjectName(QStringLiteral("lineEdit_motherName"));
        lineEdit_motherName->setFrame(false);
        lineEdit_motherName->setReadOnly(true);

        verticalLayout_55->addWidget(lineEdit_motherName);


        horizontalLayout_22->addLayout(verticalLayout_55);


        verticalLayout_53->addLayout(horizontalLayout_22);


        verticalLayout_52->addLayout(verticalLayout_53);


        verticalLayout_51->addLayout(verticalLayout_52);

        verticalLayout_56 = new QVBoxLayout();
        verticalLayout_56->setObjectName(QStringLiteral("verticalLayout_56"));
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        verticalLayout_57 = new QVBoxLayout();
        verticalLayout_57->setObjectName(QStringLiteral("verticalLayout_57"));
        label_29 = new QLabel(layoutWidget);
        label_29->setObjectName(QStringLiteral("label_29"));

        verticalLayout_57->addWidget(label_29);

        lineEdit_flatNo_3 = new QLineEdit(layoutWidget);
        lineEdit_flatNo_3->setObjectName(QStringLiteral("lineEdit_flatNo_3"));
        lineEdit_flatNo_3->setLayoutDirection(Qt::RightToLeft);
        lineEdit_flatNo_3->setMaxLength(3);

        verticalLayout_57->addWidget(lineEdit_flatNo_3);


        horizontalLayout_23->addLayout(verticalLayout_57);

        verticalLayout_58 = new QVBoxLayout();
        verticalLayout_58->setObjectName(QStringLiteral("verticalLayout_58"));
        label_30 = new QLabel(layoutWidget);
        label_30->setObjectName(QStringLiteral("label_30"));

        verticalLayout_58->addWidget(label_30);

        lineEdit_entranceNo_3 = new QLineEdit(layoutWidget);
        lineEdit_entranceNo_3->setObjectName(QStringLiteral("lineEdit_entranceNo_3"));
        lineEdit_entranceNo_3->setMaxLength(3);

        verticalLayout_58->addWidget(lineEdit_entranceNo_3);


        horizontalLayout_23->addLayout(verticalLayout_58);

        verticalLayout_59 = new QVBoxLayout();
        verticalLayout_59->setObjectName(QStringLiteral("verticalLayout_59"));
        label_31 = new QLabel(layoutWidget);
        label_31->setObjectName(QStringLiteral("label_31"));

        verticalLayout_59->addWidget(label_31);

        lineEdit_buildingNo_3 = new QLineEdit(layoutWidget);
        lineEdit_buildingNo_3->setObjectName(QStringLiteral("lineEdit_buildingNo_3"));
        lineEdit_buildingNo_3->setMaxLength(3);

        verticalLayout_59->addWidget(lineEdit_buildingNo_3);


        horizontalLayout_23->addLayout(verticalLayout_59);


        verticalLayout_56->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        verticalLayout_60 = new QVBoxLayout();
        verticalLayout_60->setObjectName(QStringLiteral("verticalLayout_60"));
        label_32 = new QLabel(layoutWidget);
        label_32->setObjectName(QStringLiteral("label_32"));

        verticalLayout_60->addWidget(label_32);

        lineEdit_blockNo_3 = new QLineEdit(layoutWidget);
        lineEdit_blockNo_3->setObjectName(QStringLiteral("lineEdit_blockNo_3"));
        lineEdit_blockNo_3->setMaxLength(3);

        verticalLayout_60->addWidget(lineEdit_blockNo_3);


        horizontalLayout_24->addLayout(verticalLayout_60);

        verticalLayout_61 = new QVBoxLayout();
        verticalLayout_61->setObjectName(QStringLiteral("verticalLayout_61"));
        label_33 = new QLabel(layoutWidget);
        label_33->setObjectName(QStringLiteral("label_33"));

        verticalLayout_61->addWidget(label_33);

        lineEdit_neighbourhoodNo_3 = new QLineEdit(layoutWidget);
        lineEdit_neighbourhoodNo_3->setObjectName(QStringLiteral("lineEdit_neighbourhoodNo_3"));
        lineEdit_neighbourhoodNo_3->setMaxLength(3);

        verticalLayout_61->addWidget(lineEdit_neighbourhoodNo_3);


        horizontalLayout_24->addLayout(verticalLayout_61);

        verticalLayout_62 = new QVBoxLayout();
        verticalLayout_62->setObjectName(QStringLiteral("verticalLayout_62"));
        label_34 = new QLabel(layoutWidget);
        label_34->setObjectName(QStringLiteral("label_34"));

        verticalLayout_62->addWidget(label_34);

        lineEdit_residenceType_3 = new QLineEdit(layoutWidget);
        lineEdit_residenceType_3->setObjectName(QStringLiteral("lineEdit_residenceType_3"));

        verticalLayout_62->addWidget(lineEdit_residenceType_3);


        horizontalLayout_24->addLayout(verticalLayout_62);


        verticalLayout_56->addLayout(horizontalLayout_24);


        verticalLayout_51->addLayout(verticalLayout_56);


        verticalLayout_50->addLayout(verticalLayout_51);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        verticalLayout_63 = new QVBoxLayout();
        verticalLayout_63->setObjectName(QStringLiteral("verticalLayout_63"));
        verticalLayout_64 = new QVBoxLayout();
        verticalLayout_64->setObjectName(QStringLiteral("verticalLayout_64"));
        label_35 = new QLabel(layoutWidget);
        label_35->setObjectName(QStringLiteral("label_35"));

        verticalLayout_64->addWidget(label_35);

        comboBox_toAddChildName_3 = new QComboBox(layoutWidget);
        comboBox_toAddChildName_3->setObjectName(QStringLiteral("comboBox_toAddChildName_3"));
        comboBox_toAddChildName_3->setEnabled(true);
        comboBox_toAddChildName_3->setLayoutDirection(Qt::RightToLeft);
        comboBox_toAddChildName_3->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        comboBox_toAddChildName_3->setEditable(true);
        comboBox_toAddChildName_3->setInsertPolicy(QComboBox::InsertAtBottom);

        verticalLayout_64->addWidget(comboBox_toAddChildName_3);


        verticalLayout_63->addLayout(verticalLayout_64);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        pushButton_addChild_3 = new QPushButton(layoutWidget);
        pushButton_addChild_3->setObjectName(QStringLiteral("pushButton_addChild_3"));

        horizontalLayout_26->addWidget(pushButton_addChild_3);


        verticalLayout_63->addLayout(horizontalLayout_26);


        horizontalLayout_25->addLayout(verticalLayout_63);

        verticalLayout_65 = new QVBoxLayout();
        verticalLayout_65->setObjectName(QStringLiteral("verticalLayout_65"));
        verticalLayout_66 = new QVBoxLayout();
        verticalLayout_66->setObjectName(QStringLiteral("verticalLayout_66"));
        label_36 = new QLabel(layoutWidget);
        label_36->setObjectName(QStringLiteral("label_36"));

        verticalLayout_66->addWidget(label_36);

        comboBox_toDeleteChildName_3 = new QComboBox(layoutWidget);
        comboBox_toDeleteChildName_3->setObjectName(QStringLiteral("comboBox_toDeleteChildName_3"));
        comboBox_toDeleteChildName_3->setLayoutDirection(Qt::RightToLeft);
        comboBox_toDeleteChildName_3->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        comboBox_toDeleteChildName_3->setEditable(true);

        verticalLayout_66->addWidget(comboBox_toDeleteChildName_3);


        verticalLayout_65->addLayout(verticalLayout_66);

        pushButton_deleteChild_3 = new QPushButton(layoutWidget);
        pushButton_deleteChild_3->setObjectName(QStringLiteral("pushButton_deleteChild_3"));

        verticalLayout_65->addWidget(pushButton_deleteChild_3);


        horizontalLayout_25->addLayout(verticalLayout_65);


        verticalLayout_50->addLayout(horizontalLayout_25);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        verticalLayout_67 = new QVBoxLayout();
        verticalLayout_67->setObjectName(QStringLiteral("verticalLayout_67"));
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        verticalLayout_68 = new QVBoxLayout();
        verticalLayout_68->setObjectName(QStringLiteral("verticalLayout_68"));
        verticalLayout_68->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_37 = new QLabel(layoutWidget);
        label_37->setObjectName(QStringLiteral("label_37"));

        verticalLayout_68->addWidget(label_37);

        comboBox_toAddResidentName_3 = new QComboBox(layoutWidget);
        comboBox_toAddResidentName_3->setObjectName(QStringLiteral("comboBox_toAddResidentName_3"));
        comboBox_toAddResidentName_3->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_toAddResidentName_3->sizePolicy().hasHeightForWidth());
        comboBox_toAddResidentName_3->setSizePolicy(sizePolicy1);
        comboBox_toAddResidentName_3->setEditable(true);
        comboBox_toAddResidentName_3->setInsertPolicy(QComboBox::InsertAtBottom);

        verticalLayout_68->addWidget(comboBox_toAddResidentName_3);


        horizontalLayout_28->addLayout(verticalLayout_68);

        verticalLayout_69 = new QVBoxLayout();
        verticalLayout_69->setObjectName(QStringLiteral("verticalLayout_69"));
        label_38 = new QLabel(layoutWidget);
        label_38->setObjectName(QStringLiteral("label_38"));

        verticalLayout_69->addWidget(label_38);

        lineEdit_residentRelation_3 = new QLineEdit(layoutWidget);
        lineEdit_residentRelation_3->setObjectName(QStringLiteral("lineEdit_residentRelation_3"));
        lineEdit_residentRelation_3->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_residentRelation_3->sizePolicy().hasHeightForWidth());
        lineEdit_residentRelation_3->setSizePolicy(sizePolicy2);

        verticalLayout_69->addWidget(lineEdit_residentRelation_3);


        horizontalLayout_28->addLayout(verticalLayout_69);


        verticalLayout_67->addLayout(horizontalLayout_28);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        pushButton_addResident_3 = new QPushButton(layoutWidget);
        pushButton_addResident_3->setObjectName(QStringLiteral("pushButton_addResident_3"));

        horizontalLayout_29->addWidget(pushButton_addResident_3);


        verticalLayout_67->addLayout(horizontalLayout_29);


        horizontalLayout_27->addLayout(verticalLayout_67);

        verticalLayout_70 = new QVBoxLayout();
        verticalLayout_70->setObjectName(QStringLiteral("verticalLayout_70"));
        verticalLayout_71 = new QVBoxLayout();
        verticalLayout_71->setObjectName(QStringLiteral("verticalLayout_71"));
        label_39 = new QLabel(layoutWidget);
        label_39->setObjectName(QStringLiteral("label_39"));

        verticalLayout_71->addWidget(label_39);

        comboBox_toDeleteResidentName_3 = new QComboBox(layoutWidget);
        comboBox_toDeleteResidentName_3->setObjectName(QStringLiteral("comboBox_toDeleteResidentName_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBox_toDeleteResidentName_3->sizePolicy().hasHeightForWidth());
        comboBox_toDeleteResidentName_3->setSizePolicy(sizePolicy3);
        comboBox_toDeleteResidentName_3->setEditable(true);

        verticalLayout_71->addWidget(comboBox_toDeleteResidentName_3);


        verticalLayout_70->addLayout(verticalLayout_71);

        pushButton_deleteResident_3 = new QPushButton(layoutWidget);
        pushButton_deleteResident_3->setObjectName(QStringLiteral("pushButton_deleteResident_3"));

        verticalLayout_70->addWidget(pushButton_deleteResident_3);


        horizontalLayout_27->addLayout(verticalLayout_70);


        verticalLayout_50->addLayout(horizontalLayout_27);

        textEdit_note_3 = new QTextEdit(layoutWidget);
        textEdit_note_3->setObjectName(QStringLiteral("textEdit_note_3"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(textEdit_note_3->sizePolicy().hasHeightForWidth());
        textEdit_note_3->setSizePolicy(sizePolicy4);
        textEdit_note_3->setMaximumSize(QSize(16777215, 16770000));
        textEdit_note_3->setLayoutDirection(Qt::RightToLeft);
        textEdit_note_3->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        textEdit_note_3->setAutoFormatting(QTextEdit::AutoAll);

        verticalLayout_50->addWidget(textEdit_note_3);


        verticalLayout_49->addLayout(verticalLayout_50);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        pushButton_applyFamilyEdit = new QPushButton(layoutWidget);
        pushButton_applyFamilyEdit->setObjectName(QStringLiteral("pushButton_applyFamilyEdit"));

        horizontalLayout_30->addWidget(pushButton_applyFamilyEdit);

        pushButton_mainWinReturn_4 = new QPushButton(layoutWidget);
        pushButton_mainWinReturn_4->setObjectName(QStringLiteral("pushButton_mainWinReturn_4"));

        horizontalLayout_30->addWidget(pushButton_mainWinReturn_4);


        verticalLayout_49->addLayout(horizontalLayout_30);


        retranslateUi(EditFamilyView);

        QMetaObject::connectSlotsByName(EditFamilyView);
    } // setupUi

    void retranslateUi(QDialog *EditFamilyView)
    {
        EditFamilyView->setWindowTitle(QApplication::translate("EditFamilyView", "\330\252\330\271\330\257\331\212\331\204 \330\250\331\212\330\247\331\206\330\247\330\252 \330\271\330\247\330\246\331\204\331\207", Q_NULLPTR));
        label_27->setText(QApplication::translate("EditFamilyView", "\330\247\330\263\331\205 \330\247\331\204\330\262\331\210\330\254", Q_NULLPTR));
        label_28->setText(QApplication::translate("EditFamilyView", "\330\247\330\263\331\205 \330\247\331\204\330\262\331\210\330\254\331\207", Q_NULLPTR));
        label_29->setText(QApplication::translate("EditFamilyView", "\330\264\331\202\331\207 (*)", Q_NULLPTR));
        lineEdit_flatNo_3->setText(QString());
        label_30->setText(QApplication::translate("EditFamilyView", "\331\205\330\257\330\256\331\204/\331\205\330\261\330\250\330\271 (*)", Q_NULLPTR));
        lineEdit_entranceNo_3->setText(QString());
        label_31->setText(QApplication::translate("EditFamilyView", "\330\271\331\205\330\247\330\261\331\207 (*)", Q_NULLPTR));
        lineEdit_buildingNo_3->setText(QString());
        label_32->setText(QApplication::translate("EditFamilyView", "\331\202\330\267\330\271\331\207 (*)", Q_NULLPTR));
        lineEdit_blockNo_3->setText(QString());
        label_33->setText(QApplication::translate("EditFamilyView", "\330\247\331\204\331\205\330\254\330\247\331\210\330\261\331\207 (*)", Q_NULLPTR));
        lineEdit_neighbourhoodNo_3->setText(QString());
        label_34->setText(QApplication::translate("EditFamilyView", "\331\206\331\210\330\271 \330\247\331\204\330\263\331\203\331\206", Q_NULLPTR));
        lineEdit_residenceType_3->setText(QString());
        label_35->setText(QApplication::translate("EditFamilyView", "\330\247\330\263\331\205 \330\247\331\204\330\247\330\250\331\206 / \330\247\331\204\330\247\330\250\331\206\331\207", Q_NULLPTR));
        pushButton_addChild_3->setText(QApplication::translate("EditFamilyView", "\330\247\330\266\330\247\331\201\331\207 \330\247\330\250\331\206\330\247\330\241", Q_NULLPTR));
        label_36->setText(QApplication::translate("EditFamilyView", "\330\247\330\263\331\205\330\247\330\241 \330\247\331\204\330\247\330\250\331\206\330\247\330\241 \330\247\331\204\331\205\330\266\330\247\331\201\331\207", Q_NULLPTR));
        pushButton_deleteChild_3->setText(QApplication::translate("EditFamilyView", "\330\255\330\260\331\201", Q_NULLPTR));
        label_37->setText(QApplication::translate("EditFamilyView", "\330\247\330\263\331\205 \330\247\331\204\331\205\330\263\330\252\330\266\330\247\331\201", Q_NULLPTR));
        label_38->setText(QApplication::translate("EditFamilyView", "\331\206\331\210\330\271 \330\247\331\204\331\202\330\261\330\247\330\250\331\207", Q_NULLPTR));
        lineEdit_residentRelation_3->setText(QString());
        pushButton_addResident_3->setText(QApplication::translate("EditFamilyView", "\330\247\330\266\330\247\331\201\331\207 \331\205\330\263\330\252\330\266\330\247\331\201", Q_NULLPTR));
        label_39->setText(QApplication::translate("EditFamilyView", "\330\247\330\263\331\205\330\247\330\241 \330\247\331\204\331\205\330\263\330\252\330\266\330\247\331\201\331\212\331\206 \330\247\331\204\331\205\330\266\330\247\331\201\331\207", Q_NULLPTR));
        pushButton_deleteResident_3->setText(QApplication::translate("EditFamilyView", "\330\255\330\260\331\201", Q_NULLPTR));
        textEdit_note_3->setHtml(QApplication::translate("EditFamilyView", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        textEdit_note_3->setPlaceholderText(QApplication::translate("EditFamilyView", "\331\205\331\204\330\247\330\255\330\270\330\247\330\252", Q_NULLPTR));
        pushButton_applyFamilyEdit->setText(QApplication::translate("EditFamilyView", "\330\255\331\201\330\270", Q_NULLPTR));
        pushButton_mainWinReturn_4->setText(QApplication::translate("EditFamilyView", "\330\261\330\254\331\210\330\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditFamilyView: public Ui_EditFamilyView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITFAMILYVIEW_H
