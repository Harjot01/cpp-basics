#include <iostream>
using namespace std;

class Item
{
private:
    int a, b;

public:
    Item(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "a = " << a << " "
             << "b = " << b << endl;
    }

    Item()
    {
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

    operator Item()
    {
        Item temp(m, n);
        return temp;
    }
};

int main()
{
    Item i1;
    Product p1;
    p1.setData(3, 4);
    i1 = p1; // p1.operator Item()
    i1.showData();

    return 0;
}