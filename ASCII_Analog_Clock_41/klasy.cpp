#include "klasy.h"
using namespace std;

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



void Czas::Pobierz()
{
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    temp = asctime(timeinfo);
    czas = "";
    for(int i = 11; i < 19; i++)
    {
        czas[i-11] = temp[i];
    }
    for(int i = 0; i < 8; i++)
    {
        if(i <= 1) h_str += czas[i];
        if(i >= 3 && i <= 4) m_str += czas[i];
        if(i >= 6 && i <= 7) s_str += czas[i];
    }
    h_int = atoi(h_str.c_str());
    m_int = atoi(m_str.c_str());
    s_int = atoi(s_str.c_str());

}

void Czas::Wyswietl()
{

    cout << h_int << " " << m_int << " " << s_int << endl;
}

void Wskazowka::Wybierz(Plansza &p1)
{
    p1.macierz[x_wymiar/2][y_wymiar/2] = znak;
}


