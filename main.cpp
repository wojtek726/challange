#include <iostream>
#include <bitset>
#include <fstream>

using namespace std;

// string szyfruj(string doRozszyfrowania, char klucz[])
// {
//     //int klucz = 0b1010111101001001010;
//     klucz[3] = {'K','E','Y'};
//     string output = doRozszyfrowania;
//     for (int i = 0; i < output.size(); i++)
//     {
//         output[i] = doRozszyfrowania[i] ^ klucz[i % (sizeof(klucz) / sizeof(char))];
//     }
//     return output;
// }

char szyfruj(char doRozszyfrowania, char klucz)
{
    //int klucz = 0b1010111101001001010;
    //char klucz = 'K';
    char output = doRozszyfrowania;

    
    output = doRozszyfrowania ^ klucz;
    
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
        char chr;
        // while (getline(infile, str))
        // {
        //     //cout << str << endl;
        //     outfile << szyfruj(str, argv[3]) << endl;
        // }
        char klucz = argv[3][0];
        while(infile.get(chr))
        {
            outfile << szyfruj(chr,klucz);
        }
        cout << argc << endl;
        infile.close();
        outfile.close();
    }

    return 0;
}