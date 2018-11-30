#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    tarcza = true;
    setWindowTitle("Analog Clock");
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::paintEvent(QPaintEvent *e)
{
    if(tarcza == true)
    {
        QPainter *painter = new QPainter(this);
        QPen *pen = new QPen(Qt::black);
        pen->setWidth(4);
        painter->setPen(*pen);
        painter->drawEllipse(0,0,500,500);
    }
    else
    {
        QPainter *painter = new QPainter(this);
        QPen *pen = new QPen(Qt::yellow);
        pen->setWidth(4);
        painter->setPen(*pen);
        painter->drawEllipse(10,10,500,500);
    }

}

