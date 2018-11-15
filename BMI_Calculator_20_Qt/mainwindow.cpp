#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_b_oblicz_clicked()
{
    float fWaga = ui->line_waga->displayText().toFloat();
    float fWzrost = ui->line_wzrost->displayText().toFloat();
    float fBMI = fWaga / (fWzrost*fWzrost);
    ui->l_bmi->setText(QString::number(fBMI));

    if(fBMI < 18.5)
    {
        ui->l_wynik->setText("Niedowaga");
    }
    if(fBMI >= 18.5 && fBMI < 25)
    {
        ui->l_wynik->setText("Wartość prawidłowa");
    }
    if(fBMI >= 25)
    {
        ui->l_wynik->setText("Nadwaga");
    }

}
