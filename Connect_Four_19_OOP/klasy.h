#ifndef KLASY_H_INCLUDED
#define KLASY_H_INCLUDED
#include <iostream>

using namespace std;

#define x 6
#define y 7
#define clear() cout << "\033[H\033[J";

class Plansza
{
    friend class Gracz;
    friend class Sedzia;
private:
     // rozmiar planszy
    char znak[3] = {'-','x','o'};
    char plansza[x][y];
    int licznik_wierszy[y];


public:
    Plansza();
    void RysujPlansze();

};



class Gracz
{
    friend class Sedzia;
private:
    char znak;
    int gdzie;


public:
    void WykonajRuch(Plansza &p1);
    Gracz(char);

};



class Sedzia
{
private:
    int kto_wygral;
    int licznik , licznik_r;


public:
    bool SprawdzWygrana(Gracz &g,Plansza &p1);
    Sedzia();
};

#endif // KLASY_H_INCLUDED
