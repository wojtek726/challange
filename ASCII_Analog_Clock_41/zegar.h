#ifndef ZEGAR_H_INCLUDED
#define ZEGAR_H_INCLUDED
#include "czas.h"


#define x 100
#define y 40

class Plansza
{
    char macierz[x][y];


public:
    Plansza();
    void Rysuj();

};

class Wskazowka
{



public:
    void Rysuj(int);
};






#endif // ZEGAR_H_INCLUDED
