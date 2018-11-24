#include "mainwindow3.h"
#include "ui_mainwindow3.h"

MainWindow3::MainWindow3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow3)
{
    ui->setupUi(this);
    connect(Pomo->timer,SIGNAL(timeout()),Pomo,SLOT(odlicz_w_dol()));
    connect(Pomo,SIGNAL(sygnal()),this,SLOT(wypisz()));
}

MainWindow3::~MainWindow3()
{
    delete ui;
}

void MainWindow3::on_actionMinutnik_triggered()
{
    hide();
    MainWindow *minutnik = new MainWindow;
    minutnik->show();
    destroy();
}

void MainWindow3::on_actionStoper_triggered()
{
    hide();
    MainWindow2 *stoper = new MainWindow2;
    stoper->show();
    destroy();
}

void MainWindow3::on_actionO_autorze_triggered()
{
    QMessageBox *box = new QMessageBox(QMessageBox::Information,"Stopwatch","Autor: Wojtek\n2018",QMessageBox::Ok);
    box->show();
}

void MainWindow3::on_actionWyjd_triggered()
{
    close();
}

void MainWindow3::on_b_25min_clicked()
{
    Pomo->setTime(1500);
    wypisz();
    Pomo->startTimer(1000);
}

void MainWindow3::on_b_5min_clicked()
{
    Pomo->setTime(300);
    wypisz();
    Pomo->startTimer(1000);
}

void MainWindow3::wypisz()
{
    Pomo->i_h = Pomo->time /  60 / 60;
    Pomo->i_m = Pomo->time / 60 - Pomo->i_h*60;
    Pomo->i_s = Pomo->time - Pomo->i_m*60 - Pomo->i_h*60*60;

    if(Pomo->i_m < 10)
    {
        ui->label->setText(QString::number(Pomo->i_h)+":0"+QString::number(Pomo->i_m)+":"+QString::number(Pomo->i_s));
    }

    if(Pomo->i_s < 10)
    {
        ui->label->setText(QString::number(Pomo->i_h)+":"+QString::number(Pomo->i_m)+":0"+QString::number(Pomo->i_s));
    }

    if(Pomo->i_s < 10 && Pomo->i_m < 10)
    {
        ui->label->setText(QString::number(Pomo->i_h)+":0"+QString::number(Pomo->i_m)+":0"+QString::number(Pomo->i_s));
    }

    if(Pomo->i_s >= 10 && Pomo->i_m >= 10)
    {
        ui->label->setText(QString::number(Pomo->i_h)+":"+QString::number(Pomo->i_m)+":"+QString::number(Pomo->i_s));
    }

}

