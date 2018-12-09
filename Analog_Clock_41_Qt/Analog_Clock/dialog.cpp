#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setMinimumSize(500,600);
    this->setMaximumSize(500,600);
    this->setGeometry(700,300,500,600);
    connect(this->timer,SIGNAL(timeout()),this,SLOT(licznik_sekund()));
    connect(this->timer,SIGNAL(timeout()),this,SLOT(licznik_minut()));

    //connect(this,SIGNAL(sygnal()),this,SLOT(wypisz()));

    QTime t = QTime::currentTime();
    ui->label_2->setText(QString::number(t.second()));
    licznik = t.second()+15;

    licz_punkty(30);
    ui->label->setText(t.toString("hh:mm:ss"));
    licz_wsk_s(licznik);
    update();

    timer->start(1000);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::paintEvent(QPaintEvent *e)
{
    QPainter *painter = new QPainter(this);
    QPen *pen = new QPen(Qt::black);
    pen->setWidth(4);

    painter->setPen(*pen);
    QTime t = QTime::currentTime();

    if(tarcza == true)
    {     
        painter->drawEllipse(0,0,500,500);
        for(int i = 1; i < 12; i++)
        {
            licz_punkty(i*30);
            licz_kreski(i*30);
            painter->drawLine(x1,y1,x1_k,y1_k);
            painter->drawLine(x2,y2,x2_k,y2_k);
        }

        painter->drawLine(250,0,250,30);
        painter->drawLine(250,470,250,500);
        painter->drawLine(0,250,30,250);
        painter->drawLine(470,250,500,250);

    }

    if(wskazowka == true)
    {
//        if(licznik >= 0 && licznik <= 15) painter->drawLine(250,250,x1_w,y1_w);
//        if(licznik > 15 && licznik < 45) painter->drawLine(250,250,x2_w,y2_w);
//        if(licznik == 45) painter->drawLine(250,250,250,460);
//        if(licznik > 45 && licznik < 60) painter->drawLine(250,250,x1_w,y1_w);
        pen->setStyle(Qt::DashLine);
        painter->setPen(*pen);
        if((t.second()+15) >= 0 && (t.second()+15) <= 15) painter->drawLine(250,250,x1_ws,y1_ws);
        if((t.second()+15) > 15 && (t.second()+15) < 45) painter->drawLine(250,250,x2_ws,y2_ws);
        if((t.second()+15) == 45) painter->drawLine(250,250,250,460);
        if((t.second()+15) > 45 && (t.second()+15) < 75) painter->drawLine(250,250,x1_ws,y1_ws);

        pen->setStyle(Qt::SolidLine);
        painter->setPen(*pen);
        if((t.minute()+15) >= 0 && (t.minute()+15) <= 15) painter->drawLine(250,250,x1_wm,y1_wm);
        if((t.minute()+15) > 15 && (t.minute()+15) < 45) painter->drawLine(250,250,x2_wm,y2_wm);
        if((t.minute()+15) == 45) painter->drawLine(250,250,250,460);
        if((t.minute()+15) > 45 && (t.minute()+15) < 75) painter->drawLine(250,250,x1_wm,y1_wm);
    }

}


void Dialog::licz_punkty(int kat)
{
    int x_o = 250, y_o = 250, r = 250;
    double a = tan(kat*2*3.14/360);
    float b = y_o-a*x_o;
    float k2 = a*a+1;
    float k1 = -2*x_o+2*a*b-2*a*y_o;
    float k0 = x_o*x_o + b*b - 2*b*y_o+y_o*y_o - r*r;

    float delta = k1*k1-4*k2*k0;
    x1 = (-k1-sqrt(delta)) / (2*k2);
    x2 = (-k1+sqrt(delta)) / (2*k2);
    y1 = a * x1 + b;
    y2 = a * x2 + b;


}

void Dialog::licz_kreski(int kat)
{
    int x_o = 250, y_o = 250, r = 230;
    double a = tan(kat*2*3.14/360);
    float b = y_o-a*x_o;
    float k2 = a*a+1;
    float k1 = -2*x_o+2*a*b-2*a*y_o;
    float k0 = x_o*x_o + b*b - 2*b*y_o+y_o*y_o - r*r;

    float delta = k1*k1-4*k2*k0;
    x1_k = (-k1-sqrt(delta)) / (2*k2);
    x2_k = (-k1+sqrt(delta)) / (2*k2);
    y1_k = a * x1_k + b;
    y2_k = a * x2_k + b;
}

void Dialog::licz_wsk_s(int kat)
{
    int x_o = 250, y_o = 250, r = 210;
    double a = tan(kat*2*3.14/360);
    float b = y_o-a*x_o;
    float k2 = a*a+1;
    float k1 = -2*x_o+2*a*b-2*a*y_o;
    float k0 = x_o*x_o + b*b - 2*b*y_o+y_o*y_o - r*r;

    float delta = k1*k1-4*k2*k0;
    x1_ws = (-k1-sqrt(delta)) / (2*k2);
    x2_ws = (-k1+sqrt(delta)) / (2*k2);
    y1_ws = a * x1_ws + b;
    y2_ws = a * x2_ws + b;
}

void Dialog::on_pushButton_clicked()
{
    licznik++;
    licz_wsk_s(licznik*6);
    update();
    ui->label->setText(QString::number(licznik));
    if(licznik == 60)
    {
        licznik = 0;
    }
}

void Dialog::licznik_sekund()
{
//    licznik++;
//    licz_wsk(licznik*6);
//    update();
//    ui->label->setText(QString::number(licznik));
//    if(licznik == 60)
//    {
//        licznik = 0;
//    }
//    QTime t = QTime::currentTime();
//    ui->label_2->setText(t.toString("hh:mm:ss"));
    QTime t = QTime::currentTime();
    licz_wsk_s((t.second()+15)*6);
    update();
    ui->label->setText(QString::number(t.second()));
    ui->label_2->setText(t.toString("hh:mm:ss"));
}

void Dialog::licz_wsk_m(int kat)
{
    int x_o = 250, y_o = 250, r = 210;
    double a = tan(kat*2*3.14/360);
    float b = y_o-a*x_o;
    float k2 = a*a+1;
    float k1 = -2*x_o+2*a*b-2*a*y_o;
    float k0 = x_o*x_o + b*b - 2*b*y_o+y_o*y_o - r*r;

    float delta = k1*k1-4*k2*k0;
    x1_wm = (-k1-sqrt(delta)) / (2*k2);
    x2_wm = (-k1+sqrt(delta)) / (2*k2);
    y1_wm = a * x1_wm + b;
    y2_wm = a * x2_wm + b;
}

void Dialog::licz_wsk_h(int kat)
{

}

void Dialog::licznik_minut()
{
    QTime t = QTime::currentTime();
    licz_wsk_m((t.minute()+15)*6);
    update();
}
