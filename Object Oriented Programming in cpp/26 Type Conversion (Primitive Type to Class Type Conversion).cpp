// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;


/*
-> Converting one data type into another is known as type conversion, it can be implicit as well as explicit.

-> When done by the compliler it is termed as implicit and when done by the programmer it is termed as explicit.

-> Primarily three types of conversions :- 
    -> Primitive type to class type
    -> Class type to Primitive type
    -> Class type to another class type
*/
class Complex
{
private:
    float real, img;

public:
    Complex() {}
    Complex(float k)
    {
        real = k;
        img = 0;
    }
    void setData(float real, float img)
    {
        this->real = real;
        this->img = img;
    }
    void showData(void)
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    Complex c1;
    int data = 5;
    c1 = data; // This statement is invoking parameterized constructor of complex class
    c1.showData();
    return 0;
}