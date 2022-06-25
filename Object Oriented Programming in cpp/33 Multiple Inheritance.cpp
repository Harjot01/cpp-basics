// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> In multiple inhertance a class can inherit from more than one classes.
*/

class M
{
protected:
    int m;

public:
    void get_m(int x)
    {
        m = x;
    }

    void display(void)
    {
        cout << "m = " << m << endl;
    }
};

class N
{
protected:
    int n;

public:
    void get_n(int x)
    {
        n = x;
    }
    void display(void)
    {
        cout << "n = " << n << endl;
    }
};

class P : public M, public N // Multiple inheritance
{
public:
    void display(void)
    {
        M::display(); // Ambiguity Resolution 
        N::display(); // Ambiguity Resolution 
        cout << "m*n = " << m * n << endl;
    }
};
int main()
{
    P p;
    p.get_m(5);
    p.get_n(4);
    p.display();
    return 0;
}