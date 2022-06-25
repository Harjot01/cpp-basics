// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class A
{
    int a;

public:
    A(){};
    A(int a = 0) // Constructor with default argument
    {
        this->a = a;
    }
    void show(void);
};

void A ::show(void)
{
    cout << a << endl;
}

int main()
{
    A a(0); // If we write A a; then it will lead to an ambiguity because there are two overloaded constructors one is default and the other one is with default arguments
    a.show();
    return 0;
}