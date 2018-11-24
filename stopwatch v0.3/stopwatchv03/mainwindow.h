#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "minutnik.h"
#include "mainwindow2.h"
#include "mainwindow3.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    Minutnik *Min = new Minutnik;
    ~MainWindow();



private slots:
    void on_b_start_clicked();

    void on_b_stop_clicked();

    void wypisz();

    void wypisz2(Minutnik *ob);


    void on_actionO_autorze_triggered();

    void on_actionWyjd_triggered();

    void on_actionStoper_triggered();

    void on_actionPomodoro_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
