#include <iostream>
using namespace std;

class Dummy
{
private:
    int a, b;
    const int x;
    int &y;
public:
    Dummy(int &n) : a(5), b(6), x(7), y(n) //To initialize const variable in this case x we have to use initializer list we don't have any option
    {}

};

int main()
{
    int m = 6;
    Dummy d1(m);
    return 0;
}