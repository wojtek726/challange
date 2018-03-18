#include <iostream>
using namespace std;

#define clear() cout << "\033[H\033[J";
#define x 6
#define y 7

char plansza[x][y];
int licznik_wierszy[y];
int ktory_gracz = 0;


void InitPlansza();
void RysujPlansze();
void WykonajRuch();
int SprawdzWygrana();


int main()
{
    int kto_wygral = 0;
    InitPlansza();
    while(kto_wygral != 1 && kto_wygral != 2 && kto_wygral != 3)
    {
        WykonajRuch();
        kto_wygral = SprawdzWygrana();
    }
    if(kto_wygral == 1) cout << "Wygral gracz x";
    else if(kto_wygral == 2) cout << "Wygral gracz o";
    else if(kto_wygral == 3) cout << "Remis";
    return 0;
}


void InitPlansza()
{

    for(int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
        {
            plansza[i][j] = '-';
            licznik_wierszy[j] = x-1;
        }

}

void RysujPlansze()
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

void WykonajRuch()
{
    int gdzie;
    RysujPlansze();
    cout << "Ktora kolumna(1-7): ";
    cin >> gdzie;
    if(licznik_wierszy[gdzie-1] >= 0)
    {
        if(ktory_gracz == 0)
        {
            plansza[licznik_wierszy[gdzie-1]][gdzie-1] = 'x';
            ktory_gracz = 1;
        }
        else
        {
            plansza[licznik_wierszy[gdzie-1]][gdzie-1] = 'o';
            ktory_gracz = 0;
        }
        licznik_wierszy[gdzie-1]--;
        RysujPlansze();
    }

}

int SprawdzWygrana()
{
    int licznik_x = 0, licznik_o = 0, licznik_r = 0;
    char temp;
// sprawdzanie pionu
    for(int j = 0; j < y; j++)
    {
        for(int i = 0; i < x; i++)
        {
            temp = plansza[i][j];
            if(temp == 'x') licznik_x++;
            else licznik_x = 0;

            if(temp == 'o') licznik_o++;
            else licznik_o = 0;

            if(licznik_x == 4) return 1;
            if(licznik_o == 4) return 2;
         }
    }
// sprawdzanie poziomu
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            temp = plansza[i][j];
            if(temp == 'x') licznik_x++;
            else licznik_x = 0;

            if(temp == 'o') licznik_o++;
            else licznik_o = 0;

            if(licznik_x == 4) return 1;
            if(licznik_o == 4) return 2;
         }
    }

// sprawdzanie skosow



// remis
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            if(plansza[i][j] == 'o' || plansza[i][j] == 'x') licznik_r++;
            if(licznik_r == (x*y)) return 3;
        }
    }
    licznik_r = 0;


}



