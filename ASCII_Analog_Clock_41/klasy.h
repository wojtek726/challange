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
    char znak = '#';
    char macierz[x_wymiar][y_wymiar];


public:
    friend class Wskazowka;
    Plansza();
    void Rysuj();

};



class Czas
{
    string czas, temp;
    time_t rawtime;
    struct tm * timeinfo;

    string h_str, m_str, s_str;
    int h_int, m_int, s_int;

public:
    void Pobierz();
    void Wyswietl();

};

class Wskazowka
{
    char znak = 'h';

public:

    void Wybierz(Plansza &p1);

};


#endif // KLASY_H_INCLUDED
