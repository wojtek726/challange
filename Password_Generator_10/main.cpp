#include <iostream>
#include <time.h>

using namespace std;


int main()
{
    srand(time(NULL));
    char znak;
    int dlugosc_hasla, random;
    char haslo[1024];

    cout << "Podaj długość hasła: ";
    cin >> dlugosc_hasla;

    for(int i = 0; i < dlugosc_hasla; i++)
    {
        random = rand() % 92 + 33;
        znak = random;
        //cout << znak << endl;
        haslo[i] = znak;
    }
    cout << endl << haslo << endl;
    
    
}
