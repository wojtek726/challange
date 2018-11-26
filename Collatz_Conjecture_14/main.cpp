#include <iostream>

using namespace std;

int main()
{
    int c, c1, start;

    cout << "Podaj liczbe startowa: ";
    cin >> start;
    cout << start << endl;
    if (!(start % 2))
    {
        c = start;
        c1 = 0.5 * c;
    }
    else
    {
        c = start;
        c1 = 3 * c + 1;
    }
    cout << c1 << endl;
    while (c1 != 1)
    {
        c = c1;
        if (!(c % 2))
        {
            
            c1 = 0.5 * c;
            
        }
        else
        {
            
            c1 = 3 * c + 1;
            
        }
        cout << c1 << endl;
    }
}