/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_2;
    QPushButton *UploadDocument;
    QPushButton *UploadReceipt;
    QPushButton *ManualInput;
    QPushButton *Viewing;
    QPushButton *Settings;
    QPushButton *exit;
    QPushButton *OutAccount;
    QStackedWidget *stackedWidget;
    QWidget *pageStart;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QWidget *pageManualInput;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_9;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_10;
    QTimeEdit *timeEdit;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_11;
    QDateEdit *dateEdit;
    QCalendarWidget *calendarWidget;
    QWidget *page_3;
    QWidget *page_4;
    QWidget *page_5;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 592);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_11 = new QHBoxLayout(centralwidget);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        UploadDocument = new QPushButton(centralwidget);
        UploadDocument->setObjectName("UploadDocument");

        verticalLayout_2->addWidget(UploadDocument);

        UploadReceipt = new QPushButton(centralwidget);
        UploadReceipt->setObjectName("UploadReceipt");

        verticalLayout_2->addWidget(UploadReceipt);

        ManualInput = new QPushButton(centralwidget);
        ManualInput->setObjectName("ManualInput");

        verticalLayout_2->addWidget(ManualInput);

        Viewing = new QPushButton(centralwidget);
        Viewing->setObjectName("Viewing");

        verticalLayout_2->addWidget(Viewing);

        Settings = new QPushButton(centralwidget);
        Settings->setObjectName("Settings");

        verticalLayout_2->addWidget(Settings);

        exit = new QPushButton(centralwidget);
        exit->setObjectName("exit");

        verticalLayout_2->addWidget(exit);

        OutAccount = new QPushButton(centralwidget);
        OutAccount->setObjectName("OutAccount");

        verticalLayout_2->addWidget(OutAccount);


        horizontalLayout_11->addLayout(verticalLayout_2);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        pageStart = new QWidget();
        pageStart->setObjectName("pageStart");
        horizontalLayoutWidget = new QWidget(pageStart);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 641, 591));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label);


        horizontalLayout_2->addLayout(verticalLayout_4);

        stackedWidget->addWidget(pageStart);
        pageManualInput = new QWidget();
        pageManualInput->setObjectName("pageManualInput");
        verticalLayout_6 = new QVBoxLayout(pageManualInput);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(pageManualInput);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_2);

        comboBox = new QComboBox(pageManualInput);
        comboBox->setObjectName("comboBox");

        horizontalLayout_4->addWidget(comboBox);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_8 = new QLabel(pageManualInput);
        label_8->setObjectName("label_8");

        horizontalLayout_12->addWidget(label_8);

        lineEdit = new QLineEdit(pageManualInput);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_12->addWidget(lineEdit);


        verticalLayout_6->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_9 = new QLabel(pageManualInput);
        label_9->setObjectName("label_9");

        horizontalLayout_13->addWidget(label_9);

        lineEdit_2 = new QLineEdit(pageManualInput);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_13->addWidget(lineEdit_2);


        verticalLayout_6->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_10 = new QLabel(pageManualInput);
        label_10->setObjectName("label_10");

        horizontalLayout_14->addWidget(label_10);

        timeEdit = new QTimeEdit(pageManualInput);
        timeEdit->setObjectName("timeEdit");

        horizontalLayout_14->addWidget(timeEdit);


        verticalLayout_6->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_11 = new QLabel(pageManualInput);
        label_11->setObjectName("label_11");

        horizontalLayout_15->addWidget(label_11);

        dateEdit = new QDateEdit(pageManualInput);
        dateEdit->setObjectName("dateEdit");

        horizontalLayout_15->addWidget(dateEdit);

        calendarWidget = new QCalendarWidget(pageManualInput);
        calendarWidget->setObjectName("calendarWidget");
        sizePolicy.setHeightForWidth(calendarWidget->sizePolicy().hasHeightForWidth());
        calendarWidget->setSizePolicy(sizePolicy);

        horizontalLayout_15->addWidget(calendarWidget);


        verticalLayout_6->addLayout(horizontalLayout_15);

        stackedWidget->addWidget(pageManualInput);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        stackedWidget->addWidget(page_5);

        horizontalLayout_11->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        UploadDocument->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202", nullptr));
        UploadReceipt->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\207\320\265\320\272", nullptr));
        ManualInput->setText(QCoreApplication::translate("MainWindow", "\320\240\321\203\321\207\320\275\320\276\320\271 \320\262\320\262\320\276\320\264", nullptr));
        Viewing->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214", nullptr));
        Settings->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        OutAccount->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\272\320\273\320\260\320\264\320\272\320\260 \320\277\320\276\320\272\320\260 \321\207\321\202\320\276 \320\275\320\265 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\270", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\270", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\270", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
