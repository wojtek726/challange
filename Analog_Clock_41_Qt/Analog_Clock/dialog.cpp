#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setMinimumSize(500,500);
    this->setMaximumSize(500,500);
    this->setGeometry(700,300,500,500);
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
}
