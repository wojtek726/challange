#include <iostream>
#include <bitset>
#include <fstream>

using namespace std;

string szyfruj(string doRozszyfrowania, int klucz)
{
    //int klucz = 0b1010111101001001010;
    string output = doRozszyfrowania;
    for (int i = 0; i < doRozszyfrowania.size(); i++)
    {
        output[i] = doRozszyfrowania[i] ^ klucz;
    }
    return output;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        cout << "Podaj argumenty\ntest sciezka1 sciezka2 klucz" << endl;
    }
    else
    {
        string file1 = argv[1];
        string file2 = argv[2];
        cout << file1 << endl
             << file2 << endl;
        ifstream infile;
        infile.open(file1);
        ofstream outfile;
        outfile.open(file2);

        string str;
        while (getline(infile, str))
        {
            //cout << str << endl;
            outfile << szyfruj(str, atoi(argv[3])) << endl;
        }
        cout << argc << endl;
        infile.close();
        outfile.close();
    }

    return 0;
}