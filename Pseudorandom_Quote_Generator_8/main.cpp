#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;


int main()
{
    srand(time(NULL));
    fstream plik;
    plik.open("przyslowia.txt", ios::in);
    string linia;
    int licznik = 0;
    int liczba_wierszy;

    getline(plik, linia);
    while (linia != "")
    {
        getline(plik, linia);
        liczba_wierszy++;
    }

    plik.close();
    plik.open("przyslowia.txt", ios::in);

    int random = rand() % liczba_wierszy + 1;

    string haslo_org;
    do
    {
        getline(plik, linia);
        licznik++;
        if (licznik == random)
        {

            haslo_org = linia;
            cout << haslo_org << endl;
        }
    } while (linia != "");


}