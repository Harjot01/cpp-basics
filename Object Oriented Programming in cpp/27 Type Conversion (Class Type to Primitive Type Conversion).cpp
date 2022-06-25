// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> Class type to primitive type can be implemented with casting operator

syntax :-
operator type()
{
    ...
    return(type_data)
}

-> Casting operator function must be a class member

-> We should not specify the return type of casting operator

-> Casting operator does not takes any arguments
*/

class Complex
{
private:
    float real;
    float img;

public:
    void setData(float real, float img)
    {
        this->real = real;
        this->img = img;
    }

    void showData(void)
    {
        cout << this->real << " + " << this->img << "i" << endl;
    }

    // Casting operator
    operator float()
    {
        return (real);
    }
};

int main()
{
    Complex c1;
    c1.setData(1.1, 2.2);
    float x;
    x = c1;
    cout << x << endl;
    return 0;
}