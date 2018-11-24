#ifndef MAINWINDOW3_H
#define MAINWINDOW3_H

#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class MainWindow3;
}

class MainWindow3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow3(QWidget *parent = 0);
    Minutnik *Pomo = new Minutnik;
    ~MainWindow3();

private slots:
    void on_actionMinutnik_triggered();

    void on_actionStoper_triggered();

    void on_actionO_autorze_triggered();

    void on_actionWyjd_triggered();

    void on_b_25min_clicked();

    void on_b_5min_clicked();

    void wypisz();

private:
    Ui::MainWindow3 *ui;
};

#endif // MAINWINDOW3_H
