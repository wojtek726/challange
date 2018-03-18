#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void WczytajLiczby(int tablica[]);
void ZapiszLiczby(int tablica[]);
bool Losuj(int tablica[]);

int tablica[99];

int main()
{
    srand(time(NULL));
    WczytajLiczby(tablica);
    while(Losuj(tablica));
    ZapiszLiczby(tablica);
    return 0;
}


void WczytajLiczby(int tablica[])
{
    string temp;
    ifstream plik_r;
    plik_r.open("liczby.txt");
    for(int i = 0; getline(plik_r, temp); i++)
    {
        tablica[i] = atoi(temp.c_str());
    }
    plik_r.close();

}

void ZapiszLiczby(int tablica[])
{
    ofstream plik_w;
    plik_w.open("liczby.txt");
    for(int i = 0; i < 99; i ++)
    {
        plik_w << tablica[i] << endl;
    }

    plik_w.close();
}

bool Losuj(int tablica[])
{
    int wylosowana_liczba;
    wylosowana_liczba = rand() % 99 + 1;
    for(int i = 0; i < 99; i++)
    {
        if(wylosowana_liczba == tablica[i])
        {
            tablica[i] = 0;
            cout << "Wylosowana liczba: " << wylosowana_liczba << endl;
            return false;
        }

    }
    return true;

}
