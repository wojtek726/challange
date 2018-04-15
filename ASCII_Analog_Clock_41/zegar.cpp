#include "zegar.h"



Plansza::Plansza()
{

    mvprintw(20,50,"."); // srodek

    mvprintw(0, 50, "*"); // 0
    mvprintw(20,4,"*"); //9
    mvprintw(39,50,"*"); // 6
    mvprintw(20,95,"*"); // 3


    mvprintw(3,72,"*"); // 1
    mvprintw(10,87,"*"); // 2
    mvprintw(3,28,"*"); // 11
    mvprintw(10,13,"*"); // 10
    mvprintw(30,87,"*");// 4
    mvprintw(37,72,"*");// 5
    mvprintw(37,28,"*");// 7
    mvprintw(30,13,"*");// 8

    move(0,0);
}



void Plansza::Rysuj()
{

}


void Wskazowka::Rysuj(int ktora)

{
    if(ktora == 0)
    {
        for(int i = 20; i > 0; i--)
        {
            mvprintw(i,50,".");
        }
    }

    if(ktora == 5)
    {
        mvprintw(19,51,".");
        mvprintw(17,53,".");
        mvprintw(15,55,".");
        mvprintw(4,71,".");
    }

    if(ktora == 15)
    {
        for(int i = 50; i < 95; i++)
        {
            mvprintw(20,i,".");
        }
    }
    move(0,0);
}
