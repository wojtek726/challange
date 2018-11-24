#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(Min->timer,SIGNAL(timeout()),Min,SLOT(odlicz_w_dol()));
    connect(Min,SIGNAL(sygnal()),this,SLOT(wypisz()));
    //connect(Min,SIGNAL(sygnal()),this,SLOT(wypisz2(Min)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_b_start_clicked()
{

    Min->setTime(ui->spin_s->value()+ui->spin_m->value()*60+ui->spin_h->value()*60*60);
    wypisz();
    //wypisz2(Min);
    Min->startTimer(1000);
}

void MainWindow::on_b_stop_clicked()
{
    Min->stopTimer();
    Min->stopPlayer();
}

void MainWindow::wypisz()
{
    Min->i_h = Min->time /  60 / 60;
    Min->i_m = Min->time / 60 - Min->i_h*60;
    Min->i_s = Min->time - Min->i_m*60 - Min->i_h*60*60;

    if(Min->i_m < 10)
    {
        ui->label->setText(QString::number(Min->i_h)+":0"+QString::number(Min->i_m)+":"+QString::number(Min->i_s));
    }

    if(Min->i_s < 10)
    {
        ui->label->setText(QString::number(Min->i_h)+":"+QString::number(Min->i_m)+":0"+QString::number(Min->i_s));
    }

    if(Min->i_s < 10 && Min->i_m < 10)
    {
        ui->label->setText(QString::number(Min->i_h)+":0"+QString::number(Min->i_m)+":0"+QString::number(Min->i_s));
    }

    if(Min->i_s >= 10 && Min->i_m >= 10)
    {
        ui->label->setText(QString::number(Min->i_h)+":"+QString::number(Min->i_m)+":"+QString::number(Min->i_s));
    }

}

void MainWindow::wypisz2(Minutnik *ob)
{
    ob->i_h = ob->time /  60 / 60;
    ob->i_m = ob->time / 60 - ob->i_h*60;
    ob->i_s = ob->time - ob->i_m*60 - ob->i_h*60*60;

    if(ob->i_m < 10)
    {
        ui->label->setText(QString::number(ob->i_h)+":0"+QString::number(ob->i_m)+":"+QString::number(ob->i_s));
    }

    if(ob->i_s < 10)
    {
        ui->label->setText(QString::number(ob->i_h)+":"+QString::number(ob->i_m)+":0"+QString::number(ob->i_s));
    }

    if(ob->i_s < 10 && ob->i_m < 10)
    {
        ui->label->setText(QString::number(ob->i_h)+":0"+QString::number(ob->i_m)+":0"+QString::number(ob->i_s));
    }

    if(ob->i_s >= 10 && ob->i_m >= 10)
    {
        ui->label->setText(QString::number(ob->i_h)+":"+QString::number(ob->i_m)+":"+QString::number(ob->i_s));
    }
}

void MainWindow::on_actionO_autorze_triggered()
{
    QMessageBox *box = new QMessageBox(QMessageBox::Information,"Stopwatch","Autor: Wojtek\n2018",QMessageBox::Ok);
    box->show();
}

void MainWindow::on_actionWyjd_triggered()
{
    close();
}

void MainWindow::on_actionStoper_triggered()
{
    hide();
    MainWindow2 *stoper = new MainWindow2;
    stoper->show();
    destroy();
}

void MainWindow::on_actionPomodoro_triggered()
{
    hide();
    MainWindow3 *pomodoro = new MainWindow3;
    pomodoro->show();
    destroy();
}
