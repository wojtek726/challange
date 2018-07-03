#include "zegar.h"


Plansza::Plansza()
{



    for(int i = 0; i < 60; i++)
    {
        int x, y, r = 20;
        x = round(r*cos(i*6*0.01745329)*1.92)+38;
        y = 20-round(r*sin(i*6*0.01745329));

        if(i % 5) mvprintw(y,x,&znak);
        else
        {
            attron(A_BOLD);
            mvprintw(y,x,"$");
            attroff(A_BOLD);
        }
    }



    move(0,0);
}



void Plansza::Rysuj()
{


    move(0,0);
}


void Wskazowka::Rysuj(int ktora)

{
    float x, y;
    int r = 18;
    float a, b;
    x = r*cos(ktora*6*0.01745329)*1.92+38;
    y = 20-r*sin(ktora*6*0.01745329);
    //mvprintw(y,x,"x");
   // x = 3;
    //y = 4;
    b = (y-(x*2)/1)/(1-x/1);
    a = (2-b)/1;

//    b = (y-(x*20)/38)/(1-x/38);
//    a = (20-b)/38;
    move(15,15);
    printw("%f %f\n", a, b);


    move(0,0);
}
