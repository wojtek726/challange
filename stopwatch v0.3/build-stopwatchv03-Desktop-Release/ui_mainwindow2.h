/********************************************************************************
** Form generated from reading UI file 'mainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow2
{
public:
    QAction *actionMinutnik;
    QAction *actionStoper;
    QAction *actionO_autorze;
    QAction *actionWyjd;
    QAction *actionPomodoro;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *b_start;
    QPushButton *b_stop;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName(QStringLiteral("MainWindow2"));
        MainWindow2->resize(260, 260);
        MainWindow2->setMinimumSize(QSize(260, 260));
        MainWindow2->setMaximumSize(QSize(260, 260));
        actionMinutnik = new QAction(MainWindow2);
        actionMinutnik->setObjectName(QStringLiteral("actionMinutnik"));
        actionStoper = new QAction(MainWindow2);
        actionStoper->setObjectName(QStringLiteral("actionStoper"));
        actionO_autorze = new QAction(MainWindow2);
        actionO_autorze->setObjectName(QStringLiteral("actionO_autorze"));
        actionWyjd = new QAction(MainWindow2);
        actionWyjd->setObjectName(QStringLiteral("actionWyjd"));
        actionPomodoro = new QAction(MainWindow2);
        actionPomodoro->setObjectName(QStringLiteral("actionPomodoro"));
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 60, 201, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        b_start = new QPushButton(layoutWidget);
        b_start->setObjectName(QStringLiteral("b_start"));

        horizontalLayout_2->addWidget(b_start);

        b_stop = new QPushButton(layoutWidget);
        b_stop->setObjectName(QStringLiteral("b_stop"));

        horizontalLayout_2->addWidget(b_stop);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 130, 122, 41));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        MainWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow2);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 260, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow2->setMenuBar(menubar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionMinutnik);
        menuMenu->addAction(actionStoper);
        menuMenu->addAction(actionPomodoro);
        menuMenu->addSeparator();
        menuMenu->addAction(actionO_autorze);
        menuMenu->addAction(actionWyjd);

        retranslateUi(MainWindow2);

        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QApplication::translate("MainWindow2", "Stopwatch v0.3", Q_NULLPTR));
        actionMinutnik->setText(QApplication::translate("MainWindow2", "Minutnik", Q_NULLPTR));
        actionStoper->setText(QApplication::translate("MainWindow2", "Stoper", Q_NULLPTR));
        actionO_autorze->setText(QApplication::translate("MainWindow2", "O autorze", Q_NULLPTR));
        actionWyjd->setText(QApplication::translate("MainWindow2", "Wyjd\305\272", Q_NULLPTR));
        actionPomodoro->setText(QApplication::translate("MainWindow2", "Pomodoro", Q_NULLPTR));
        b_start->setText(QApplication::translate("MainWindow2", "START", Q_NULLPTR));
        b_stop->setText(QApplication::translate("MainWindow2", "STOP", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow2", "0:00:00", Q_NULLPTR));
        menuMenu->setTitle(QApplication::translate("MainWindow2", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
