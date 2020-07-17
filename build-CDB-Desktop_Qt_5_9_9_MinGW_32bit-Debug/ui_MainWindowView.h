/********************************************************************************
** Form generated from reading UI file 'MainWindowView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWVIEW_H
#define UI_MAINWINDOWVIEW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_addPerson;
    QPushButton *pushButton_newFamily;
    QTabWidget *tabWidget;
    QWidget *tab_7;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_searchingName;
    QPushButton *pushButton_searchForPerson;
    QTableView *tableView;
    QWidget *tab_8;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_searchingNeighbourhood;
    QLabel *label;
    QLineEdit *lineEdit_searchingBlockNo;
    QPushButton *pushButton_searchForFamilies;
    QTableView *tableView_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(601, 314);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(601, 314));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        MainWindow->setFont(font);
        MainWindow->setAcceptDrops(false);
        MainWindow->setLayoutDirection(Qt::RightToLeft);
        MainWindow->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(16, 10, 571, 291));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_addPerson = new QPushButton(layoutWidget);
        pushButton_addPerson->setObjectName(QStringLiteral("pushButton_addPerson"));

        horizontalLayout->addWidget(pushButton_addPerson);

        pushButton_newFamily = new QPushButton(layoutWidget);
        pushButton_newFamily->setObjectName(QStringLiteral("pushButton_newFamily"));

        horizontalLayout->addWidget(pushButton_newFamily);


        verticalLayout_2->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(layoutWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        layoutWidget1 = new QWidget(tab_7);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 561, 231));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit_searchingName = new QLineEdit(layoutWidget1);
        lineEdit_searchingName->setObjectName(QStringLiteral("lineEdit_searchingName"));
        lineEdit_searchingName->setLayoutDirection(Qt::RightToLeft);
        lineEdit_searchingName->setFrame(true);
        lineEdit_searchingName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lineEdit_searchingName);

        pushButton_searchForPerson = new QPushButton(layoutWidget1);
        pushButton_searchForPerson->setObjectName(QStringLiteral("pushButton_searchForPerson"));

        horizontalLayout_2->addWidget(pushButton_searchForPerson);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(layoutWidget1);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setAlternatingRowColors(true);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setVisible(false);
        tableView->horizontalHeader()->setCascadingSectionResizes(true);
        tableView->horizontalHeader()->setDefaultSectionSize(200);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setCascadingSectionResizes(true);
        tableView->verticalHeader()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout->addWidget(tableView);

        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        layoutWidget2 = new QWidget(tab_8);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 0, 561, 231));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_searchingNeighbourhood = new QLineEdit(layoutWidget2);
        lineEdit_searchingNeighbourhood->setObjectName(QStringLiteral("lineEdit_searchingNeighbourhood"));
        lineEdit_searchingNeighbourhood->setLayoutDirection(Qt::RightToLeft);
        lineEdit_searchingNeighbourhood->setFrame(true);
        lineEdit_searchingNeighbourhood->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(lineEdit_searchingNeighbourhood);

        label = new QLabel(layoutWidget2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        lineEdit_searchingBlockNo = new QLineEdit(layoutWidget2);
        lineEdit_searchingBlockNo->setObjectName(QStringLiteral("lineEdit_searchingBlockNo"));
        lineEdit_searchingBlockNo->setLayoutDirection(Qt::RightToLeft);
        lineEdit_searchingBlockNo->setFrame(true);
        lineEdit_searchingBlockNo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(lineEdit_searchingBlockNo);

        pushButton_searchForFamilies = new QPushButton(layoutWidget2);
        pushButton_searchForFamilies->setObjectName(QStringLiteral("pushButton_searchForFamilies"));

        horizontalLayout_3->addWidget(pushButton_searchForFamilies);


        verticalLayout_3->addLayout(horizontalLayout_3);

        tableView_2 = new QTableView(layoutWidget2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_2->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_3->addWidget(tableView_2);

        tabWidget->addTab(tab_8, QString());

        verticalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\331\202\330\247\330\271\330\257\331\207 \330\250\331\212\330\247\331\206\330\247\330\252", Q_NULLPTR));
        pushButton_addPerson->setText(QApplication::translate("MainWindow", "\330\247\330\266\330\247\331\201\331\207 \330\264\330\256\330\265 \330\254\330\257\331\212\330\257", Q_NULLPTR));
        pushButton_newFamily->setText(QApplication::translate("MainWindow", "\330\247\330\266\330\247\331\201\331\207 \330\271\330\247\330\246\331\204\331\207 \330\254\330\257\331\212\330\257\331\207", Q_NULLPTR));
        lineEdit_searchingName->setText(QString());
        lineEdit_searchingName->setPlaceholderText(QApplication::translate("MainWindow", "\330\247\330\263\331\205 \330\247\331\204\330\264\330\256\330\265", Q_NULLPTR));
        pushButton_searchForPerson->setText(QApplication::translate("MainWindow", "\330\250\330\255\330\253", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "\330\250\330\255\330\253 \330\271\331\206 \330\264\330\256\330\265 \330\250\330\247\331\204\330\247\330\263\331\205", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\330\247\331\204\331\205\330\254\330\247\331\210\330\261\331\207", Q_NULLPTR));
        lineEdit_searchingNeighbourhood->setText(QString());
        lineEdit_searchingNeighbourhood->setPlaceholderText(QString());
        label->setText(QApplication::translate("MainWindow", "\330\247\331\204\331\202\330\267\330\271\331\207", Q_NULLPTR));
        lineEdit_searchingBlockNo->setText(QString());
        lineEdit_searchingBlockNo->setPlaceholderText(QString());
        pushButton_searchForFamilies->setText(QApplication::translate("MainWindow", "\330\250\330\255\330\253", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "\330\250\330\255\330\253 \330\271\331\206 \330\271\330\247\330\246\331\204\331\207 \330\250\330\247\331\204\331\205\331\206\330\267\331\202\331\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWVIEW_H
