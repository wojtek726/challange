#include "czas.h"
#include "zegar.h"

int main()
{
    system("resize -s 41 77");
    initscr(); //1



    Plansza p1;
    p1.Rysuj();
//    Wskazowka wsk;
//    wsk.Rysuj(5);


    getch();
    endwin(); //4
    return 0;
}





