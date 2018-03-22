#include <iostream>
#include "klasy.h"



int main()
{
    Plansza p1;
    Gracz g1('x'), g2('o');
    Sedzia s1;
    bool koniec = false;

    while(1)
    {
        p1.RysujPlansze();
        g1.WykonajRuch(p1);
        p1.RysujPlansze();
        koniec = s1.SprawdzWygrana(g1,p1);
        if(koniec == true) break;
        g2.WykonajRuch(p1);
        p1.RysujPlansze();
        koniec = s1.SprawdzWygrana(g2,p1);
        if(koniec == true) break;
    }



    return 0;
}




