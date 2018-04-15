#include "klasy.h"


Plansza::Plansza()
{

    for(int i = 0; i < x_wymiar; i++)
    {
        for(int j = 0; j < y_wymiar; j++)
        {
            macierz[i][j] = ' ';
        }
    }
    for(int i = 0; i < x_wymiar; i++)
    {
        macierz[i][0] = znak;
        macierz[i][y_wymiar-1] = znak;
    }
    for(int i = 0; i < y_wymiar; i++)
    {
        macierz[0][i] = znak;
        macierz[x_wymiar-1][i] = znak;
    }
    for(int i = 0; i < 3; i++)
    {
        macierz[i][y_wymiar/2] = znak;
        macierz[x_wymiar-i-1][y_wymiar/2] = znak;
        macierz[x_wymiar/2][i] = znak;
        macierz[x_wymiar/2][y_wymiar-i-1] = znak;

    }

        macierz[x_wymiar/4][y_wymiar/10] = znak;
        macierz[x_wymiar/8][y_wymiar/4] = znak;

        macierz[x_wymiar/4][y_wymiar - y_wymiar/10 - 1] = znak;
        macierz[x_wymiar/8][y_wymiar - y_wymiar/4 - 1] = znak;

        macierz[x_wymiar - x_wymiar/4 - 1][y_wymiar/10] = znak;
        macierz[x_wymiar - x_wymiar/8 - 1][y_wymiar/4] = znak;

        macierz[x_wymiar - x_wymiar/4 - 1][y_wymiar - y_wymiar/10 - 1] = znak;
        macierz[x_wymiar - x_wymiar/8 - 1][y_wymiar - y_wymiar/4 - 1] = znak;

}



void Plansza::Rysuj()
{
    for(int i = 0; i < x_wymiar; i++)
    {
        for(int j = 0; j < y_wymiar; j++)
        {
            cout << macierz[i][j];
        }
        cout << endl;
    }

}





void Wskazowka::Wybierz(Plansza &p1, Czas cz)
{
    //if(cz.s_int == 0) for(int i = 0; i < 8; i++) p1.macierz[x_wymiar/2-i][y_wymiar/2] = znak;

    //if(cz.s_int == 5)
    p1.macierz[x_wymiar/2][y_wymiar/2] = znak;
    p1.macierz[x_wymiar/2-1][y_wymiar/2+1] = znak;

}





