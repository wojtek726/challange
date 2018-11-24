#include "mainwindow2.h"
#include "ui_mainwindow2.h"


MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    connect(Stoper->timer,SIGNAL(timeout()),Stoper,SLOT(odlicz_w_gore()));
    connect(Stoper,SIGNAL(sygnal()),this,SLOT(wypisz()));
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::on_actionMinutnik_triggered()
{
    hide();
    MainWindow *window = new MainWindow;
    window->show();
    destroy();
}

void MainWindow2::wypisz()
{
    Stoper->i_h = Stoper->time /  60 / 60;
    Stoper->i_m = Stoper->time / 60 - Stoper->i_h*60;
    Stoper->i_s = Stoper->time - Stoper->i_m*60 - Stoper->i_h*60*60;

    if(Stoper->i_m < 10)
    {
        ui->label->setText(QString::number(Stoper->i_h)+":0"+QString::number(Stoper->i_m)+":"+QString::number(Stoper->i_s));
    }

    if(Stoper->i_s < 10)
    {
        ui->label->setText(QString::number(Stoper->i_h)+":"+QString::number(Stoper->i_m)+":0"+QString::number(Stoper->i_s));
    }

    if(Stoper->i_s < 10 && Stoper->i_m < 10)
    {
        ui->label->setText(QString::number(Stoper->i_h)+":0"+QString::number(Stoper->i_m)+":0"+QString::number(Stoper->i_s));
    }

    if(Stoper->i_s >= 10 && Stoper->i_m >= 10)
    {
        ui->label->setText(QString::number(Stoper->i_h)+":"+QString::number(Stoper->i_m)+":"+QString::number(Stoper->i_s));
    }

}



void MainWindow2::on_b_start_clicked()
{
    Stoper->setTime(0);
    wypisz();
    Stoper->startTimer(1000);

}

void MainWindow2::on_b_stop_clicked()
{
    Stoper->stopTimer();
}

void MainWindow2::on_actionO_autorze_triggered()
{
    QMessageBox *box = new QMessageBox(QMessageBox::Information,"Stopwatch","Autor: Wojtek\n2018",QMessageBox::Ok);
    box->show();
}

void MainWindow2::on_actionWyjd_triggered()
{
    close();
}

void MainWindow2::on_actionPomodoro_triggered()
{
    hide();
    MainWindow3 *pomodoro = new MainWindow3;
    pomodoro->show();
    destroy();
}
