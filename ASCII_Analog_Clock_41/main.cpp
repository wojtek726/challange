#include "klasy.h"


int main()
{
    Plansza p1;

    Czas cz;
    cz.Pobierz();
    //cz.Wyswietl();

    Wskazowka wsk1;
    wsk1.Wybierz(p1,cz);
    p1.Rysuj();



    return 0;
}





