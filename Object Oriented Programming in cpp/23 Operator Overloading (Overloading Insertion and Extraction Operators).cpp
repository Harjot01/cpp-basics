// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> "cout" is the object of ostream class and "cin" is the object of istream class
*/

class Complex
{
private:
    float real;
    float img;

public:
    void get_data(float, float);
    void show_data(void);
    friend ostream &operator<<(ostream &, Complex);
    friend istream &operator>>(istream &, Complex &);
};

void Complex ::get_data(float real, float img)
{
    this->real = real;
    this->img = img;
}
ostream &operator<<(ostream &dout, Complex C)
{
    dout << C.real << " + " << C.img << "i" << endl;
    return (dout); // We are returning the object inorder to cascade
}

istream &operator>>(istream &din, Complex &C)
{
    din >> C.real >> C.img;
    return (din); // We are returning the object inorder to cascade
}

void Complex::show_data(void)
{
    cout << real << " + " << img << "i";
}

int main()
{
    Complex c1;
    cout << "Enter the real and imaginary part" << endl;
    cin >> c1;
    cout << c1; // cout.operator<<(c1); or if it is a friend then :- operator<<(cout, c1)
    return 0;
}