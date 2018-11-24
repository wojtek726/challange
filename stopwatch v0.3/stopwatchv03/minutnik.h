#ifndef MINUTNIK_H
#define MINUTNIK_H

#include <QMainWindow>
#include <QTimer>
#include <QMediaPlayer>

class Minutnik : public QMainWindow
{
    Q_OBJECT
public:
    explicit Minutnik(QWidget *parent = nullptr);

    QTimer *timer = new QTimer;
    QMediaPlayer *player = new QMediaPlayer;
    int time, i_h, i_m, i_s;

    void setTime(int);  // ustawienie zmiennej time
    void resetTime();   // wyzerowanie time
    void startTimer(int);   // zaczyna liczyc do int
    void stopTimer();       // stop timera
    void stopPlayer();      // stop playera

signals:
    void sygnal();          // funkcja bez ciala sluzaca jako sygnal

public slots:
    void odlicz_w_dol();    // liczenie do minutnika
    void odlicz_w_gore();   // liczenie do stopera
};

#endif // MINUTNIK_H
