/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_Eps;
    QLineEdit *lineEdit_N;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_solve;
    QPushButton *pushButton_exit;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_rect;
    QLineEdit *lineEdit_trapeze;
    QLineEdit *lineEdit_simpson;
    QLineEdit *lineEdit_value;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_rect_2;
    QLineEdit *lineEdit_trapeze_2;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_simpson_2;
    QComboBox *comboBox_2;
    QLabel *label_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 308);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit_Eps = new QLineEdit(centralwidget);
        lineEdit_Eps->setObjectName(QString::fromUtf8("lineEdit_Eps"));
        lineEdit_Eps->setGeometry(QRect(160, 110, 113, 21));
        lineEdit_N = new QLineEdit(centralwidget);
        lineEdit_N->setObjectName(QString::fromUtf8("lineEdit_N"));
        lineEdit_N->setGeometry(QRect(160, 150, 71, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 110, 41, 18));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 150, 81, 18));
        pushButton_solve = new QPushButton(centralwidget);
        pushButton_solve->setObjectName(QString::fromUtf8("pushButton_solve"));
        pushButton_solve->setGeometry(QRect(60, 210, 80, 26));
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(170, 210, 80, 26));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(90, 50, 191, 26));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 30, 101, 18));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(470, 60, 58, 18));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(320, 100, 111, 18));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(380, 130, 51, 18));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(370, 160, 61, 18));
        lineEdit_rect = new QLineEdit(centralwidget);
        lineEdit_rect->setObjectName(QString::fromUtf8("lineEdit_rect"));
        lineEdit_rect->setGeometry(QRect(440, 100, 113, 21));
        lineEdit_trapeze = new QLineEdit(centralwidget);
        lineEdit_trapeze->setObjectName(QString::fromUtf8("lineEdit_trapeze"));
        lineEdit_trapeze->setGeometry(QRect(440, 130, 113, 21));
        lineEdit_simpson = new QLineEdit(centralwidget);
        lineEdit_simpson->setObjectName(QString::fromUtf8("lineEdit_simpson"));
        lineEdit_simpson->setGeometry(QRect(440, 160, 113, 21));
        lineEdit_value = new QLineEdit(centralwidget);
        lineEdit_value->setObjectName(QString::fromUtf8("lineEdit_value"));
        lineEdit_value->setGeometry(QRect(440, 190, 113, 21));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(340, 190, 91, 18));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(610, 130, 81, 18));
        lineEdit_rect_2 = new QLineEdit(centralwidget);
        lineEdit_rect_2->setObjectName(QString::fromUtf8("lineEdit_rect_2"));
        lineEdit_rect_2->setGeometry(QRect(690, 100, 81, 21));
        lineEdit_trapeze_2 = new QLineEdit(centralwidget);
        lineEdit_trapeze_2->setObjectName(QString::fromUtf8("lineEdit_trapeze_2"));
        lineEdit_trapeze_2->setGeometry(QRect(690, 130, 81, 21));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(630, 100, 61, 18));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(610, 160, 81, 18));
        lineEdit_simpson_2 = new QLineEdit(centralwidget);
        lineEdit_simpson_2->setObjectName(QString::fromUtf8("lineEdit_simpson_2"));
        lineEdit_simpson_2->setGeometry(QRect(690, 160, 81, 21));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(560, 50, 171, 26));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(590, 30, 111, 18));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Eps =", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Starting N =", nullptr));
        pushButton_solve->setText(QCoreApplication::translate("MainWindow", "Solve", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Central rectangle method", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Trapeze method", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Simpson's method", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "Choose method", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Results", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Central rectangle", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Trapeze", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Simpson's", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Accurate value", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "N_trapeze =", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "N_rect =", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "N_simpson =", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "1 / (1 + x + x^2)", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "8 + 2x - x^2", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "1 / (1 + x^2)", nullptr));

        label_12->setText(QCoreApplication::translate("MainWindow", "Choose equation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
