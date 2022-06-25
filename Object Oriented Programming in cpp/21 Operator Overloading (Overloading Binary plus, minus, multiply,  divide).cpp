// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    float real;
    float img;

public:
    Complex() {}
    Complex(float, float);
    void display();
    Complex operator+(Complex); // Overloading Binary + operator
    Complex operator-(Complex); // Overloading Binary - operator
    Complex operator*(Complex); // Overloading Binary * operator
    Complex operator/(Complex); // Overloading Binary / operator
};

Complex ::Complex(float real, float img)
{
    this->real = real;
    this->img = img;
}

void Complex ::display()
{
    cout << this->real << " + " << this->img << " i" << endl;
}

Complex Complex::operator+(Complex c)
{
    Complex temp;
    temp.real = this->real + c.real;
    temp.img = this->img + c.img;
    return temp;
}
Complex Complex::operator-(Complex c)
{
    Complex temp;
    temp.real = this->real - c.real;
    temp.img = this->img - c.img;
    return temp;
}
Complex Complex::operator*(Complex c)
{
    Complex temp;
    temp.real = this->real * c.real;
    temp.img = this->img * c.img;
    return temp;
}
Complex Complex::operator/(Complex c)
{
    Complex temp;
    temp.real = this->real / c.real;
    temp.img = this->img / c.img;
    return temp;
}
int main()
{
    Complex c1(1.1, 2.2);
    Complex c2(3.3, 4.4);

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    Complex c5 = c1 * c2;
    Complex c6 = c1 / c2;
    c3.display();
    c4.display();
    c5.display();
    c6.display();

    return 0;
}