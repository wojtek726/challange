#ifndef ZEGAR_H_INCLUDED
#define ZEGAR_H_INCLUDED
#include "czas.h"
#include <math.h>



class Plansza
{

    char znak = '.';



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
