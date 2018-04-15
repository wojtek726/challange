#ifndef CZAS_H_INCLUDED
#define CZAS_H_INCLUDED

#include <stdlib.h>
#include <ncurses.h>
#include <string>
//#include <iostream>

using namespace std;

class Czas
{
    string czas, temp;
    time_t rawtime;
    struct tm * timeinfo;

    string h_str, m_str, s_str;
    int h_int, m_int, s_int;

public:
    void Pobierz();
    void Wyswietl();

};


#endif // CZAS_H_INCLUDED
