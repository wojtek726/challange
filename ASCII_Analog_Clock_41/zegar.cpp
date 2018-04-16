#include "zegar.h"


Plansza::Plansza()
{
//
//    mvprintw(20,50,"."); // srodek
//
//    mvprintw(0, 50, "*"); // 0
//    mvprintw(20,4,"*"); //9
//    mvprintw(39,50,"*"); // 6
//    mvprintw(20,95,"*"); // 3
//
//
//    mvprintw(3,72,"*"); // 1
//    mvprintw(10,87,"*"); // 2
//    mvprintw(3,28,"*"); // 11
//    mvprintw(10,13,"*"); // 10
//    mvprintw(30,87,"*");// 4
//    mvprintw(37,72,"*");// 5
//    mvprintw(37,28,"*");// 7
//    mvprintw(30,13,"*");// 8
//
//
//    ///////////////////////////////////
//    mvprintw(0,0,".");
//    mvprintw(0,1,".");
//    mvprintw(0,2,".");
//    mvprintw(0,3,".");
//    mvprintw(1,0,".");
//    mvprintw(1,1,".");
//    mvprintw(1,2,".");
//    mvprintw(1,3,".");



    move(0,0);
}



void Plansza::Rysuj()
{
    char znak[] = {'.'};


//      for(int i = 0; i < 40; i++)
//        for(int j = 0; j < 100; j++)
//        {
//            if(j < 50)
//            mvprintw(i,j,".");
//            else mvprintw(i,j,"*");
//        }

//        for(int i = 0; i <= y; i++)
//        {
//            mvprintw(i, 0, znak);
//            mvprintw(i, x, znak);
//        }
//
//        for(int i = 0; i <= x; i++)
//        {
//            mvprintw(0,i,znak);
//            mvprintw(y,i,znak);
//        }




    for(int i = 0; i < 60; i++)
    {
        int x, y, r = 20;
        x = round(r*cos(i*6*0.01745329)*1.92)+38;
        y = 20-round(r*sin(i*6*0.01745329));

        if(i % 5) mvprintw(y,x,".");
        else
        {
            attron(A_BOLD);
            mvprintw(y,x,"#");
            attroff(A_BOLD);
        }
    }

//        attron(A_BOLD);
//        mvprintw(20,38,znak);
//        mvprintw(10,38,znak);
//        mvprintw(20,57,znak);
//        mvprintw(15,54,znak);
//        mvprintw(12,48,znak);
//        attroff(A_BOLD);

        move(0,0);
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
