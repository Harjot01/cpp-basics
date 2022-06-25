#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Seekg
    // ifstream fin;
    // fin.open("Hiscore.txt");
    // cout << fin.tellg() << endl;
    // cout << char(fin.get()) << endl;
    // cout << char(fin.get()) << endl;
    // cout << fin.tellg() << endl;

    // fin.seekg(6);
    // cout << char(fin.get()) << endl;
    // cout << fin.tellg() << endl;

    // fin.seekg(-2, ios_base ::end);
    // cout << fin.tellg() << endl; //was pointing on eof i.e. end of file
    // cout<<char(fin.get());


    // Seekp
    ofstream fout;
    fout.open("Hiscore.txt", ios::app | ios::app);
    fout<<"ABCDEFG";
    cout<<fout.tellp();
    fout.seekp(2, ios_base :: beg);
    cout<<fout.tellp();

    fout.close();
    return 0;
}
