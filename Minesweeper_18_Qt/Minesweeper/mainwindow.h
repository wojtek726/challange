#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <stdlib.h>
#include <time.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QPushButton *button = new QPushButton[100];
    int ilosc_m;
    int miny[10];
    //bool wcisniety[100];

private slots:


    void button_clicked();
    void init_planszy();
    void licz_miny(int i);

    void on_b_reset_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
