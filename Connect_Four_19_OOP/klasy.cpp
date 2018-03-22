#include "klasy.h"



Plansza::Plansza()
{
    for(int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
        {
            plansza[i][j] = '-';
            licznik_wierszy[j] = x-1;
        }

}

void Plansza::RysujPlansze()
{
    clear();
    cout << "1  2  3  4  5  6  7" << endl << endl;
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            cout << plansza[i][j] << "  ";
        }
        cout << endl;
    }
}


Gracz::Gracz(char znak1)
{
    znak = znak1;
}

void Gracz::WykonajRuch(Plansza &p1)
{

    cout << "Ktora kolumna(1-7): ";
    cin >> gdzie;

    p1.plansza[p1.licznik_wierszy[gdzie-1]][gdzie-1] = znak;
    p1.licznik_wierszy[gdzie-1]--;
}




Sedzia::Sedzia()
{
    kto_wygral = 0;
    licznik = 0;
    licznik_r = 0;
}


bool Sedzia::SprawdzWygrana(Gracz &g,Plansza &p1)
{


// sprawdzanie pionu
    for(int j = 0; j < y; j++)
    {
        for(int i = 0; i < x; i++)
        {
            if(g.znak == p1.plansza[i][j]) licznik++;
            else licznik = 0;

            if(licznik == 4)
            {
                cout << "Wygral gracz: " << g.znak << endl;
                return true;
            }

        }
    }
// sprawdzanie poziomu
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            if(g.znak == p1.plansza[i][j]) licznik++;
            else licznik = 0;

            if(licznik == 4)
            {
                cout << "Wygral gracz: " << g.znak << endl;
                return true;
            }
        }
    }

// sprawdzanie skosow
// skos rosnacy od lewej do prawej
    for(int j = 0; j < 4; j++)
    {

        if(g.znak == p1.plansza[3-j][j]) licznik++;
        else licznik = 0;

        if(licznik == 4)
        {
            cout << "Wygral gracz: " << g.znak << endl;
            return true;
        }
    }
    for(int j = 0; j < 5; j++)
    {
        if(g.znak == p1.plansza[4-j][j]) licznik++;
        else licznik = 0;

        if(licznik == 4)
        {
            cout << "Wygral gracz: " << g.znak << endl;
            return true;
        }
    }
    for(int j = 0; j < 6; j++)
    {
        if(g.znak == p1.plansza[5-j][j]) licznik++;
        else licznik = 0;

        if(licznik == 4)
        {
            cout << "Wygral gracz: " << g.znak << endl;
            return true;
        }
    }
    for(int j = 1; j < 7; j++)
    {
        if(g.znak == p1.plansza[6-j][j]) licznik++;
        else licznik = 0;

        if(licznik == 4)
        {
            cout << "Wygral gracz: " << g.znak << endl;
            return true;
        }
    }
    for(int j = 2; j < 7; j++)
    {
        if(g.znak == p1.plansza[7-j][j]) licznik++;
        else licznik = 0;

        if(licznik == 4)
        {
            cout << "Wygral gracz: " << g.znak << endl;
            return true;
        }
    }
    for(int j = 3; j < 7; j++)
    {
        if(g.znak == p1.plansza[8-j][j]) licznik++;
        else licznik = 0;

        if(licznik == 4)
        {
            cout << "Wygral gracz: " << g.znak << endl;
            return true;
        }
    }


// skos malejacy od lewej do prawej

    for(int j = 0; j < 4; j++)
    {
        if(g.znak == p1.plansza[j+2][j]) licznik++;
        else licznik = 0;

        if(licznik == 4)
        {
            cout << "Wygral gracz: " << g.znak << endl;
            return true;
        }
    }
    for(int j = 0; j < 5; j++)
    {
        if(g.znak == p1.plansza[j+2][j]) licznik++;
        else licznik = 0;

        if(licznik == 4)
        {
            cout << "Wygral gracz: " << g.znak << endl;
            return true;
        }
    }
    for(int j = 0; j < 6; j++)
    {
        if(g.znak == p1.plansza[j][j]) licznik++;
        else licznik = 0;

        if(licznik == 4)
        {
            cout << "Wygral gracz: " << g.znak << endl;
            return true;
        }
    }
    for(int j = 0; j < 6; j++)
    {
        if(g.znak == p1.plansza[j][j+1]) licznik++;
        else licznik = 0;

        if(licznik == 4)
        {
            cout << "Wygral gracz: " << g.znak << endl;
            return true;
        }
    }
    for(int j = 0; j < 5; j++)
    {
        if(g.znak == p1.plansza[j][j+2]) licznik++;
        else licznik = 0;

        if(licznik == 4)
        {
            cout << "Wygral gracz: " << g.znak << endl;
            return true;
        }
    }
    for(int j = 0; j < 4; j++)
    {
        if(g.znak == p1.plansza[j][j+3]) licznik++;
        else licznik = 0;

        if(licznik == 4)
        {
            cout << "Wygral gracz: " << g.znak << endl;
            return true;
        }
    }


// remis
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            if(p1.plansza[i][j] == p1.znak[1] || p1.plansza[i][j] == p1.znak[2]) licznik_r++;
            if(licznik_r == (x*y))
            {
                cout << "REMIS" << endl;
                return true;
            }
        }
    }
    licznik_r = 0;
    return false;
}
