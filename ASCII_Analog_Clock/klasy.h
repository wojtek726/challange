#ifndef KLASY_H_INCLUDED
#define KLASY_H_INCLUDED
#include <iostream>
#include <cstdlib>

#define x_wymiar 20
#define y_wymiar 41

using namespace std;

class Plansza
{

private:
    char znak = '@';
    char macierz[x_wymiar][y_wymiar];


public:
    Plansza();
    void Rysuj();

};


#endif // KLASY_H_INCLUDED
