#include "czas.h"
#include "zegar.h"

int main()
{

    initscr(); //1
//    int rzedy, kolumny;
//    getmaxyx( stdscr, rzedy, kolumny );
//    printw("rzedy: %d \nkolumny: %d\n", rzedy, kolumny);
//
//
//    Czas cz1;
//    cz1.Pobierz();
//    cz1.Wyswietl();
//


    Plansza p1;
    Wskazowka wsk;
    wsk.Rysuj(5);


    getch();
    endwin(); //4
    return 0;
}





