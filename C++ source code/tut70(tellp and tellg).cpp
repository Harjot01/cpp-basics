#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //tellg is a member function of istream class
    // tellg basically tells us the current postition of the get pointer
    // ifstream fin;
    // char ch;
    // fin.open("Hiscore.txt");
    // cout<<fin.tellg();
    // cout<<char(fin.get());
    // fin.close();

    //tellp is a member function of ostream class
    // tellp basically tells us the current position of the put pointer. Put pointer points to index where we will insert or put the value
    ofstream fout;
    char ch;
    fout.open("Hiscore.txt", ios::app);
    cout << fout.tellp();
    fout << "print it";
    cout << fout.tellp();
    fout.close();

    return 0;
}
