// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

// Binary operators overloading using friend function

class Complex
{
private:
    float real;
    float img;

public:
    Complex() {}
    Complex(float, float);
    void display(void);
    friend Complex operator+(Complex, Complex);

    bool operator==(Complex c1)
    {
        if (c1.img == c1.real)
        {
            return true;
        }
        return false;
    }
};

Complex ::Complex(float real, float img)
{
    this->real = real;
    this->img = img;
}

void Complex ::display(void)
{
    cout << this->real << " + " << this->img << " i" << endl;
}

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;

    return temp;
}

int main()
{
    Complex c1(1.1, 2.2);
    Complex c2(3.3, 4.4);

    Complex c3 = c1 + c2;

    c3.display();

    if (c1 == c2)
    {
        cout << "They are equal" << endl;
    }
    else
    {
        cout << "They are not equal" << endl;
    }

    return 0;
}