#include <iostream>
using namespace std;

class Dummy
{
private:
    int a, b;
    int *p;

public:
    Dummy() // Parameterized constructor
    {
        p = new int; // DMA dynamic memory allocation
    }
    void setData(int x, int y, int z)
    {
        a = x;
        b = y;

        *p = z;
    }
    void showData()
    {
        cout << "a = " << a << " "
             << "b = " << b << endl;
    }

    Dummy(Dummy &d)
    {
        this->a = d.a;
        this->b = d.b;

        this->p = new int;
        *(this->p) = *(d.p);
    }

    ~Dummy()
    {
        delete p;
    }
};

int main()
{
    Dummy d1;
    d1.setData(1, 2, 3);
    Dummy d2 = d1; // Shallow copy is done by the compiler by making copy constructor
    // and deepy copy is done by us by defined our copy constructor
    d2.showData();
    return 0;
}

// Compiler provides
// 1) defualt constructor
// 2) copy constructor