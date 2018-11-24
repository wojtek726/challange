#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = 0);
    ~MainWindow2();
    Minutnik *Stoper = new Minutnik;

private slots:
    void on_actionMinutnik_triggered();

    void wypisz();

    void on_b_start_clicked();

    void on_b_stop_clicked();

    void on_actionO_autorze_triggered();

    void on_actionWyjd_triggered();

    void on_actionPomodoro_triggered();

private:
    Ui::MainWindow2 *ui;
};

#endif // MAINWINDOW2_H
