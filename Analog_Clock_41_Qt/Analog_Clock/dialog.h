#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPainter>
#include <QTimer>
#include <QTime>
#include <math.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    bool tarcza = true;
    bool wskazowka = true;
    //int licznik = 14;
    void paintEvent(QPaintEvent *e);
    void licz_punkty(int kat);
    void licz_kreski(int kat);
    void licz_wsk_s(int kat);
    void licz_wsk_m(int kat);
    void licz_wsk_h(int kat);

    QTimer *timer = new QTimer;

signals:


private slots:
    void licznik();
//    void licznik_minut();
//    void licznik_godzin();


private:
    Ui::Dialog *ui;
    int x1,y1,x2,y2;
    int x1_k,y1_k,x2_k,y2_k;
    int x1_ws,y1_ws,x2_ws,y2_ws;
    int x1_wm,y1_wm,x2_wm,y2_wm;
    int x1_wh,y1_wh,x2_wh,y2_wh;


};

#endif // DIALOG_H
