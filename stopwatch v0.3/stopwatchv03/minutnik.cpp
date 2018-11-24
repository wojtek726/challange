#include "minutnik.h"

Minutnik::Minutnik(QWidget *parent) : QMainWindow(parent)
{
    player->setMedia(QUrl::fromLocalFile("/home/wojtek/beep.mp3"));
}


void Minutnik::odlicz_w_dol()
{
    time--;
    if (time==0) // countdown has finished
    {
        timer->stop();
        player->play();
    }
    else // re-start counter
    {
        timer->start(1000);
    }

    sygnal();
}

void Minutnik::resetTime()
{
    time = 0;
}

void Minutnik::setTime(int i)
{
    time = i;
}

void Minutnik::startTimer(int i)
{
    timer->start(i);
}

void Minutnik::stopTimer()
{
    timer->stop();
}

void Minutnik::stopPlayer()
{
    player->stop();
}

void Minutnik::odlicz_w_gore()
{
    time++;
    timer->start(1000);
    sygnal();
}
