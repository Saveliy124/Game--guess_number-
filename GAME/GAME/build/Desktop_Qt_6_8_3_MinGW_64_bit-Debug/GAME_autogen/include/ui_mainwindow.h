/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEdit_guess;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLabel *label_2;
    QLabel *label_result;
    QPushButton *pushButton_try;
    QPushButton *pushButton_end;
    QLabel *label_3;
    QLabel *label_attempt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 140, 171, 21));
        lineEdit_guess = new QLineEdit(centralwidget);
        lineEdit_guess->setObjectName("lineEdit_guess");
        lineEdit_guess->setGeometry(QRect(250, 130, 121, 31));
        radioButton_1 = new QRadioButton(centralwidget);
        radioButton_1->setObjectName("radioButton_1");
        radioButton_1->setGeometry(QRect(260, 30, 111, 21));
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(260, 60, 121, 18));
        radioButton_3 = new QRadioButton(centralwidget);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(260, 90, 141, 18));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 50, 161, 41));
        label_result = new QLabel(centralwidget);
        label_result->setObjectName("label_result");
        label_result->setGeometry(QRect(260, 170, 401, 31));
        pushButton_try = new QPushButton(centralwidget);
        pushButton_try->setObjectName("pushButton_try");
        pushButton_try->setGeometry(QRect(260, 220, 81, 51));
        pushButton_end = new QPushButton(centralwidget);
        pushButton_end->setObjectName("pushButton_end");
        pushButton_end->setGeometry(QRect(470, 110, 81, 51));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(440, 210, 121, 21));
        label_attempt = new QLabel(centralwidget);
        label_attempt->setObjectName("label_attempt");
        label_attempt->setGeometry(QRect(590, 210, 51, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \321\203\320\263\320\260\320\264\321\213\320\262\320\260\320\265\320\274\320\276\320\263\320\276 \321\207\320\270\321\201\320\273\320\260: ", nullptr));
        radioButton_1->setText(QCoreApplication::translate("MainWindow", "\320\233\320\265\320\263\320\272\320\270\320\271(1-10)", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271(1-100)", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\320\276\320\266\320\275\321\213\320\271(1-1000)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\203\321\200\320\276\320\262\320\275\321\217 \321\201\320\273\320\276\320\266\320\275\320\276\321\201\321\202\320\270:", nullptr));
        label_result->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \321\201\320\273\320\276\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
        pushButton_try->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\277\321\213\321\202\320\272\320\260", nullptr));
        pushButton_end->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\320\276\320\275\321\207\320\270\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\320\276\320\277\321\213\321\202\320\276\320\272:", nullptr));
        label_attempt->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
