#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


void EncryptDecrypt(vector<char> &doRozszyfrowania, string klucz)
{

    for(size_t i = 0; i < doRozszyfrowania.size(); i++)
    {
        doRozszyfrowania[i] ^= klucz[i % klucz.length()];
    }

}
    

int main(int argc, char* argv[])
{
    const string inFileName = argv[1];
    const string outFileName = argv[2];
    const string key = argv[3];
    
    vector<char> buffer;
    ifstream infile;
    infile.open(inFileName,ios::binary);

    infile.seekg (0, infile.end);
    int length = infile.tellg();
    infile.seekg (0, infile.beg);

    buffer.resize(length);

    infile.read(&buffer[0],length);

    EncryptDecrypt(buffer,key);

    ofstream outfile;
    outfile.open(outFileName,ios::binary);
    outfile.write(&buffer[0],buffer.size());

    infile.close();
    outfile.close();
    //cout << buffer << endl;

    return 0;
}