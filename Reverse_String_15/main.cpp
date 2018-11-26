#include <iostream>
#include <string>

using namespace std;

const int wielkosc_bufora = 1024;

int main()
{
    char tekst[wielkosc_bufora];
    char tekst_wyjsciowy[wielkosc_bufora];

    cout << "Podaj tekst: " << endl;
    cin >> tekst;
    int dlugosc_tekstu = 0;

    for(int i = 0; tekst[i] != '\0' ; i++)
    {            
        dlugosc_tekstu++;      
    }
    cout << dlugosc_tekstu << endl;

    for(int i = 0; i < dlugosc_tekstu; i++)
    {
        tekst_wyjsciowy[i] = tekst[dlugosc_tekstu-1-i];
    }
    cout << tekst_wyjsciowy << endl;
}