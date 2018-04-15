#include "czas.h"


void Czas::Pobierz()
{
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    temp = asctime(timeinfo);
    czas = "";
    for(int i = 11; i < 19; i++)
    {
        czas[i-11] = temp[i];
    }
    for(int i = 0; i < 8; i++)
    {
        if(i <= 1) h_str += czas[i];
        if(i >= 3 && i <= 4) m_str += czas[i];
        if(i >= 6 && i <= 7) s_str += czas[i];
    }
    h_int = atoi(h_str.c_str());
    m_int = atoi(m_str.c_str());
    s_int = atoi(s_str.c_str());

}

void Czas::Wyswietl()
{

    //cout << h_int << " " << m_int << " " << s_int << endl;
    printw("%d %d %d\n", h_int, m_int, s_int);
}
