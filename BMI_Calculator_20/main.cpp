#include <iostream>

using namespace std;

int main()
{
     float wzrost, waga, BMI;
     cout << "Podaj wzrost[m]: ";
     cin >> wzrost;
     cout << "Podaj wage[kg]: ";
     cin >> waga;
     BMI = waga / (wzrost*wzrost);
     cout << endl << endl;
     cout << "Twoje BMI to: " << BMI << endl; 
     if(BMI < 18.5)
     {
         cout << "Niedowaga" << endl;
     }
     if(BMI >= 18.5 && BMI < 25) 
     {
         cout << "Wartość prawidłowa" << endl;
     }
     if(BMI >= 25)
     {
         cout << "Nadwaga" << endl;
     }
}