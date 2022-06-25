// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> Class type to another Class type Conversion using Casting Operator
*/

class Item
{
private:
public:
    int a, b;
    void showData(void)
    {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

class Product
{
private:
    int m, n;

public:
    void setData(int x, int y)
    {
        m = x;
        n = y;
    }

    void showData(void)
    {
        cout << "m = " << m << ", n = " << n << endl;
    }

    operator Item()
    {
        Item i;
        i.a = m;
        i.b = n;
        return i;
    }
};

int main()
{
    Item i1;
    Product p1;
    p1.setData(3, 4);
    i1 = p1;
    i1.showData();
    return 0;
}