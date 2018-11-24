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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionMinutnik;
    QAction *actionO_autorze;
    QAction *actionWyjd;
    QAction *actionStoper;
    QAction *actionPomodoro;
    QWidget *centralWidget;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *b_start;
    QPushButton *b_stop;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spin_h;
    QSpinBox *spin_m;
    QSpinBox *spin_s;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menuBar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(260, 260);
        MainWindow->setMinimumSize(QSize(260, 260));
        MainWindow->setMaximumSize(QSize(260, 260));
        actionMinutnik = new QAction(MainWindow);
        actionMinutnik->setObjectName(QStringLiteral("actionMinutnik"));
        actionO_autorze = new QAction(MainWindow);
        actionO_autorze->setObjectName(QStringLiteral("actionO_autorze"));
        actionWyjd = new QAction(MainWindow);
        actionWyjd->setObjectName(QStringLiteral("actionWyjd"));
        actionStoper = new QAction(MainWindow);
        actionStoper->setObjectName(QStringLiteral("actionStoper"));
        actionPomodoro = new QAction(MainWindow);
        actionPomodoro->setObjectName(QStringLiteral("actionPomodoro"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 170, 122, 41));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 100, 201, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        b_start = new QPushButton(layoutWidget);
        b_start->setObjectName(QStringLiteral("b_start"));

        horizontalLayout_2->addWidget(b_start);

        b_stop = new QPushButton(layoutWidget);
        b_stop->setObjectName(QStringLiteral("b_stop"));

        horizontalLayout_2->addWidget(b_stop);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 60, 158, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        spin_h = new QSpinBox(layoutWidget1);
        spin_h->setObjectName(QStringLiteral("spin_h"));

        horizontalLayout->addWidget(spin_h);

        spin_m = new QSpinBox(layoutWidget1);
        spin_m->setObjectName(QStringLiteral("spin_m"));

        horizontalLayout->addWidget(spin_m);

        spin_s = new QSpinBox(layoutWidget1);
        spin_s->setObjectName(QStringLiteral("spin_s"));

        horizontalLayout->addWidget(spin_s);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 40, 161, 20));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 260, 22));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionMinutnik);
        menuMenu->addAction(actionStoper);
        menuMenu->addAction(actionPomodoro);
        menuMenu->addSeparator();
        menuMenu->addAction(actionO_autorze);
        menuMenu->addAction(actionWyjd);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Stopwatch v0.3", Q_NULLPTR));
        actionMinutnik->setText(QApplication::translate("MainWindow", "Minutnik", Q_NULLPTR));
        actionO_autorze->setText(QApplication::translate("MainWindow", "O autorze", Q_NULLPTR));
        actionWyjd->setText(QApplication::translate("MainWindow", "Wyjd\305\272", Q_NULLPTR));
        actionStoper->setText(QApplication::translate("MainWindow", "Stoper", Q_NULLPTR));
        actionPomodoro->setText(QApplication::translate("MainWindow", "Pomodoro", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "0:00:00", Q_NULLPTR));
        b_start->setText(QApplication::translate("MainWindow", "START", Q_NULLPTR));
        b_stop->setText(QApplication::translate("MainWindow", "STOP", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "h:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "m:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "s:", Q_NULLPTR));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
