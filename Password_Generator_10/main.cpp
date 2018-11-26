#include <iostream>
#include <time.h>

using namespace std;

const int wielkosc_bufora = 1024;

int main()
{
    srand(time(NULL));
    char znak;
    int dlugosc_hasla, random;
    char haslo[wielkosc_bufora];

    cout << "Podaj długość hasła: ";
    cin >> dlugosc_hasla;

    for(int i = 0; i < dlugosc_hasla; i++)
    {
        random = rand() % 92 + 33;
        znak = random;
        for (int j = 0; j < wielkosc_bufora; j++)
        {
            if(znak == haslo[i])
            {
                
            }
            else
            {
                haslo[i] = znak;       
            }
        }
        //cout << znak << endl;
        
    }
    cout << endl << haslo << endl;
    
    
}
