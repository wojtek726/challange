#include "czas.h"
#include "zegar.h"

int main()
{
    system("resize -s 41 77");
    initscr();



    Plansza p1;
    Wskazowka wsk;
    wsk.Rysuj(0);


    getch();
    endwin();
    return 0;
}





