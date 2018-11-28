#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand (time(NULL));
    init_planszy();



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::button_clicked()
{
    ilosc_m = 0;
    for(int i = 0; i < 100; i++)
    {
        if(button[i].isDown())
        {
            ui->label->setText(QString::number(i));
            licz_miny(i);
        }
    }

}

void MainWindow::init_planszy()
{
    int j = 0, k = 0;
    for(int i = 0; i < 100; i++)
    {
        if(i % 10 == 0 && i != 0)
        {
            j++;
            k = 0;
        }
        connect(button+i,SIGNAL(pressed()),this,SLOT(button_clicked()));
        button[i].setParent(this);
        button[i].setGeometry(10+k*15,25+j*15,15,15);
        button[i].show();
        k++;
    }

    QString tekst;
    for(int i = 0; i < 10; i++)
    {
        int random = rand() % 100;
        for(int j = 0; j < 10; j++)
        {
            if(miny[j] == random)
            {
                random = rand() % 100;
            }
        }
        miny[i] = random;
        //button[random].setText("M");
        tekst += QString::number(miny[i])+" ";
    }
    ui->label_3->setText(tekst);


}

void MainWindow::on_b_reset_clicked()
{
    init_planszy();
    for(int i = 0; i < 100; i++)
    {
        button[i].setText("");
    }
}

void MainWindow::licz_miny(int i)
{
    ilosc_m = 0;
    for(int j = 0; j < 9; j++)
    {

        if(i <= 8 && i >= 1)
        {
            if(i+1 == miny[j]) ilosc_m++;
            if(i-1 == miny[j]) ilosc_m++;
            if(i+10 == miny[j]) ilosc_m++;
            if(i+11 == miny[j]) ilosc_m++;
            if(i+9 == miny[j]) ilosc_m++;
        }
        else if(i >= 91 && i <= 98)
        {
            if(i+1 == miny[j]) ilosc_m++;
            if(i-1 == miny[j]) ilosc_m++;
            if(i-10 == miny[j]) ilosc_m++;
            if(i-11 == miny[j]) ilosc_m++;
            if(i-9 == miny[j]) ilosc_m++;
        }
        else if(i == 0)
        {
            if(i+1 == miny[j]) ilosc_m++;
            if(i+11 == miny[j]) ilosc_m++;
            if(i+10 == miny[j]) ilosc_m++;
        }
        else if(i == 90)
        {
            if(i+1 == miny[j]) ilosc_m++;
            if(i-9 == miny[j]) ilosc_m++;
            if(i-10 == miny[j]) ilosc_m++;
        }
        else if(i == 9)
        {
            if(i-1 == miny[j]) ilosc_m++;
            if(i+9 == miny[j]) ilosc_m++;
            if(i+10 == miny[j]) ilosc_m++;
        }
        else if(i == 99)
        {
            if(i-1 == miny[j]) ilosc_m++;
            if(i-11 == miny[j]) ilosc_m++;
            if(i-10 == miny[j]) ilosc_m++;
        }
        else if(i % 10 == 0 && i != 0 && i != 90)
        {
            if(i+1 == miny[j]) ilosc_m++;
            if(i+10 == miny[j]) ilosc_m++;
            if(i-10 == miny[j]) ilosc_m++;
            if(i+11 == miny[j]) ilosc_m++;
            if(i-9 == miny[j]) ilosc_m++;
        }
        else if(i % 10 == 9 && i != 9 && i != 99)
        {
            if(i-1 == miny[j]) ilosc_m++;
            if(i+10 == miny[j]) ilosc_m++;
            if(i-10 == miny[j]) ilosc_m++;
            if(i-11 == miny[j]) ilosc_m++;
            if(i+9 == miny[j]) ilosc_m++;
        }
        else
        {
            if(i+1 == miny[j]) ilosc_m++;
            if(i-1 == miny[j]) ilosc_m++;
            if(i+10 == miny[j]) ilosc_m++;
            if(i-10 == miny[j]) ilosc_m++;
            if(i+11 == miny[j]) ilosc_m++;
            if(i-11 == miny[j]) ilosc_m++;
            if(i+9 == miny[j]) ilosc_m++;
            if(i-9 == miny[j]) ilosc_m++;
        }
        if(i == miny[j])
        {
            button[i].setText("B");
        }

    }
    if(button[i].text() != "B")
    {
        button[i].setText(QString::number(ilosc_m));
    }

}
