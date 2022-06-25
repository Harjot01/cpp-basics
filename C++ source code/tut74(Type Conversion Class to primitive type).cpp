#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void showData()
    {
        cout << "a = " << a << " "
             << "b = " << b << endl;
    }

    operator int() // Casting operator
    {
        return(a);
    }
};

int main()
{
    Complex c1;
    c1.setData(1, 2);
    int x;
    x = c1;
    cout<<x<<endl;
    return 0;
}