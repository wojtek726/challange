/********************************************************************************
** Form generated from reading UI file 'mainwindow3.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW3_H
#define UI_MAINWINDOW3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow3
{
public:
    QAction *actionMinutnik;
    QAction *actionStoper;
    QAction *actionPomodoro;
    QAction *actionO_autorze;
    QAction *actionWyjd;
    QWidget *centralwidget;
    QPushButton *b_25min;
    QPushButton *b_5min;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *MainWindow3)
    {
        if (MainWindow3->objectName().isEmpty())
            MainWindow3->setObjectName(QStringLiteral("MainWindow3"));
        MainWindow3->resize(260, 260);
        MainWindow3->setMinimumSize(QSize(260, 260));
        MainWindow3->setMaximumSize(QSize(260, 260));
        actionMinutnik = new QAction(MainWindow3);
        actionMinutnik->setObjectName(QStringLiteral("actionMinutnik"));
        actionStoper = new QAction(MainWindow3);
        actionStoper->setObjectName(QStringLiteral("actionStoper"));
        actionPomodoro = new QAction(MainWindow3);
        actionPomodoro->setObjectName(QStringLiteral("actionPomodoro"));
        actionO_autorze = new QAction(MainWindow3);
        actionO_autorze->setObjectName(QStringLiteral("actionO_autorze"));
        actionWyjd = new QAction(MainWindow3);
        actionWyjd->setObjectName(QStringLiteral("actionWyjd"));
        centralwidget = new QWidget(MainWindow3);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        b_25min = new QPushButton(centralwidget);
        b_25min->setObjectName(QStringLiteral("b_25min"));
        b_25min->setGeometry(QRect(30, 70, 89, 25));
        b_5min = new QPushButton(centralwidget);
        b_5min->setObjectName(QStringLiteral("b_5min"));
        b_5min->setGeometry(QRect(140, 70, 89, 25));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 140, 122, 41));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        MainWindow3->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow3);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 260, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow3->setMenuBar(menubar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionMinutnik);
        menuMenu->addAction(actionStoper);
        menuMenu->addAction(actionPomodoro);
        menuMenu->addSeparator();
        menuMenu->addAction(actionO_autorze);
        menuMenu->addAction(actionWyjd);

        retranslateUi(MainWindow3);

        QMetaObject::connectSlotsByName(MainWindow3);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow3)
    {
        MainWindow3->setWindowTitle(QApplication::translate("MainWindow3", "Stopwatch v0.3", Q_NULLPTR));
        actionMinutnik->setText(QApplication::translate("MainWindow3", "Minutnik", Q_NULLPTR));
        actionStoper->setText(QApplication::translate("MainWindow3", "Stoper", Q_NULLPTR));
        actionPomodoro->setText(QApplication::translate("MainWindow3", "Pomodoro", Q_NULLPTR));
        actionO_autorze->setText(QApplication::translate("MainWindow3", "O autorze", Q_NULLPTR));
        actionWyjd->setText(QApplication::translate("MainWindow3", "Wyjd\305\272", Q_NULLPTR));
        b_25min->setText(QApplication::translate("MainWindow3", "25 min", Q_NULLPTR));
        b_5min->setText(QApplication::translate("MainWindow3", "5 min", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow3", "0:00:00", Q_NULLPTR));
        menuMenu->setTitle(QApplication::translate("MainWindow3", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow3: public Ui_MainWindow3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW3_H
