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

    //cout << liczba_wierszy << endl;
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
            //cout << haslo_org << endl;
        }
    } while (linia != "");

    //cout << random << endl;
    //cout << haslo_org.length() << endl;

    string haslo = haslo_org;
    for (int i = 0; i < haslo.length(); i++)
    {
        if ((int(haslo[i]) >= 65 && int(haslo[i]) <= 90) || (int(haslo[i]) >= 97 && int(haslo[i]) <= 122))
        {
            haslo[i] = '_';
        }
    }

    cout << haslo << endl;

    char litera;
    int licznik_podlog = 0;
    int punkty = 0;

    bool koniec = false;
    while (koniec == false)
    {
        licznik_podlog = 0;
        
        cout << "Podaj litere: ";
        cin >> litera;
        int licznik_liter = 0;
        for (int i = 0; i < haslo_org.length(); i++)
        {
            if (haslo_org[i] == litera)
            {
                haslo[i] = litera;
                licznik_liter++;
            }
        }
        if(licznik_liter == 0)
        {
            punkty++;
        }
        cout << haslo << endl;
        
        for (int i = 0; i < haslo.length(); i++)
        {
            if (haslo[i] == '_')
            {
                licznik_podlog++;
            }
            
        }

        if(licznik_podlog == 0 || punkty == 6)
        {
            koniec = true;
        }
        cout << "Liczba punktów: " << punkty << endl;
        if(punkty == 1)
        {
            cout << "       o" << endl;
        }
        if(punkty == 2)
        {
            cout << "       o" << endl;
            cout << "       | " << endl;
        }
        if(punkty == 3)
        {
            cout << "       o" << endl;
            cout << "      /| " << endl;
        }
        if(punkty == 4)
        {
            cout << "       o" << endl;
            cout << "      /|\\ " << endl;
        }
        if(punkty == 5)
        {
            cout << "       o" << endl;
            cout << "      /|\\ " << endl;
            cout << "      /  " << endl;
        }
        if(punkty == 6)
        {
            cout << "       o" << endl;
            cout << "      /|\\ " << endl;
            cout << "      / \\ " << endl;
        }
        cout << endl << endl << endl;
    }
    cout << haslo_org << endl;
    plik.close();
}