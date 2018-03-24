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
        macierz[i][21] = znak;
        macierz[x_wymiar-i-1][21] = znak;

    }
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
