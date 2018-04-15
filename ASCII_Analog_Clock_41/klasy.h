#ifndef KLASY_H_INCLUDED
#define KLASY_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include <time.h>

//#define x_wymiar 19
//#define y_wymiar 41

#define x_wymiar 29
#define y_wymiar 61

//#define x_wymiar 35
//#define y_wymiar 71

using namespace std;

class Plansza
{
    friend class Wskazowka;
    char znak = '#';
    char macierz[x_wymiar][y_wymiar];


public:
    friend class Wskazowka;
    Plansza();
    void Rysuj();

};





class Wskazowka
{
    char znak = 's';
    int pozycja[60][12];


public:

    //Wskazowka();
    void Wybierz(Plansza &p1, Czas cz);

};


#endif // KLASY_H_INCLUDED
