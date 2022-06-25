// Don't Overthink, Just Code
#include <iostream>
using namespace std;

/*
-> The concept of having more than one constructor with different parameters so that every constructor can perform a different  task is called constructor overloading
*/

class complex
{
    float x, y;

public:
    complex() {}
    complex(float a)
    {
        x = y = a;
    }
    complex(float real, float img)
    {
        x = real;
        y = img;
    }
    friend complex sum(complex, complex);
    friend void show(complex);
};

complex sum(complex c1, complex c2)
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}

void show(complex c)
{
    cout << c.x << " + " << c.y << " i" << endl;
}

int main()
{
    complex A(2.7, 3.5);
    complex B(1.6);
    complex C;
    C = sum(A, B);
    show(C);
    return 0;
}