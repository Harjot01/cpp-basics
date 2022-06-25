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
        cout << "a = " << a << endl
             << "b = " << b << endl;
    }

    // Pre increment operator overloading
    Complex operator++(int)
    {
        Complex temp;
        temp.a = ++a;
        temp.b = ++b;

        return temp;
    }

    // Pre decrement operator overloading
    Complex operator--(int)
    {
        Complex temp;
        temp.a = --this->a;
        temp.b = --this->b;

        return temp;
    }

    friend ostream &operator<<(ostream &, Complex);
    friend istream &operator>>(istream &, Complex &);
    friend Complex operator+(Complex, Complex);
    friend Complex operator-(Complex, Complex);
    friend Complex operator++(Complex &);
    friend Complex operator--(Complex &);
};

//insertion operator overloading
ostream &operator<<(ostream &, Complex obj)
{
    cout << "a = " << obj.a << endl
         << "b = " << obj.b << endl;
}

//extraction operator overloading
istream &operator>>(istream &, Complex &obj)
{
    cin >> obj.a >> obj.b;
}

// Addition operator overloaded
Complex operator+(Complex obj1, Complex obj2)
{
    Complex temp;
    temp.a = obj1.a + obj2.a;
    temp.b = obj1.b + obj2.b;

    return temp;
}

// Subtraction operator overloaded
Complex operator-(Complex obj1, Complex obj2)
{
    Complex temp;
    temp.a = obj1.a - obj2.a;
    temp.b = obj1.b - obj2.b;

    return temp;
}

// Post decrement operator overloaded
Complex operator--(Complex &obj1)
{
    Complex temp;
    temp.a = obj1.a--;
    temp.b = obj1.b--;

    return temp;
}

// Post increment operator overloaded
Complex operator++(Complex &obj1)
{
    Complex temp;
    temp.a = obj1.a++;
    temp.b = obj1.b++;

    return temp;
}

int main()
{
    Complex c1, c2, c3, c4;
    cout << "Enter the complex number for object1" << endl;
    cin >> c1; // operator>>(cin, c1);
    // cout<<"Enter the complex number for object2"<<endl;
    // cin >> c2;
    c3 = c1++;
    c3.showData();

    return 0;
}