#include <iostream>
using namespace std;

class A
{
private:
    int a, b;
    int *ptr;

public:
    A()
    {
        ptr = new int; // This is the example of dynamic constructor
        a = 0;
        b = 0;
    }
    A(int x, int y)
    {
        a = x;
        b = y;
    }

    void showData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    A o1, o2(3, 4), o3;
    A *ptr = new A; // This is not a dynamic constructor;

    return 0;
}
