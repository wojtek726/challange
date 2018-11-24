#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    fstream plik;
    plik.open("przyslowia.txt",ios::in);
    string linia;
    int licznik = 0;
    int liczba_wierszy;

    getline(plik, linia);
    while(linia != "")
    {
        getline(plik, linia);
        liczba_wierszy++;
    }

    cout << liczba_wierszy << endl;
    plik.close();
    plik.open("przyslowia.txt",ios::in);

    int random = rand() % liczba_wierszy + 1;
 
    string haslo_org;
    do
    {
        getline(plik, linia); 
        licznik++;
        if(licznik == random)
        {
            
            haslo_org = linia;
            cout << haslo_org << endl; 
        }     
    }
    while(linia != "");


    cout << random << endl;
    cout << haslo_org.length() << endl;
    
    string haslo = haslo_org;
    for(int i = 0; i < haslo.length(); i++)
    {
        if((int(haslo[i]) >= 41 && int(haslo[i]) <= 90) || (int(haslo[i]) >= 97 && int(haslo[i]) <= 122) )
        {
            haslo[i] = '_';
        }
    }

    cout << haslo << endl;
    cout << int(haslo[3]) << endl;

    plik.close();
}