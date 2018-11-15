/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *line_wzrost;
    QLabel *l_wzrost;
    QLabel *l_waga;
    QLineEdit *line_waga;
    QPushButton *b_oblicz;
    QLabel *label;
    QLabel *l_bmi;
    QLabel *l_wynik;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(360, 230);
        MainWindow->setMinimumSize(QSize(360, 230));
        MainWindow->setMaximumSize(QSize(360, 230));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        line_wzrost = new QLineEdit(centralWidget);
        line_wzrost->setObjectName(QStringLiteral("line_wzrost"));
        line_wzrost->setGeometry(QRect(110, 30, 113, 25));
        l_wzrost = new QLabel(centralWidget);
        l_wzrost->setObjectName(QStringLiteral("l_wzrost"));
        l_wzrost->setGeometry(QRect(30, 30, 81, 17));
        l_waga = new QLabel(centralWidget);
        l_waga->setObjectName(QStringLiteral("l_waga"));
        l_waga->setGeometry(QRect(30, 70, 81, 17));
        line_waga = new QLineEdit(centralWidget);
        line_waga->setObjectName(QStringLiteral("line_waga"));
        line_waga->setGeometry(QRect(110, 70, 113, 25));
        b_oblicz = new QPushButton(centralWidget);
        b_oblicz->setObjectName(QStringLiteral("b_oblicz"));
        b_oblicz->setGeometry(QRect(250, 50, 89, 25));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 130, 41, 17));
        l_bmi = new QLabel(centralWidget);
        l_bmi->setObjectName(QStringLiteral("l_bmi"));
        l_bmi->setGeometry(QRect(80, 130, 67, 17));
        l_wynik = new QLabel(centralWidget);
        l_wynik->setObjectName(QStringLiteral("l_wynik"));
        l_wynik->setGeometry(QRect(40, 170, 171, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 360, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BMI Calculator", Q_NULLPTR));
        l_wzrost->setText(QApplication::translate("MainWindow", "Wzrost[m]:", Q_NULLPTR));
        l_waga->setText(QApplication::translate("MainWindow", "Waga[kg]:", Q_NULLPTR));
        b_oblicz->setText(QApplication::translate("MainWindow", "Oblicz", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "BMI:", Q_NULLPTR));
        l_bmi->setText(QString());
        l_wynik->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
