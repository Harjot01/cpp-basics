// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> Class type to another Class type Conversion

-> It can be achieved either by using the constructor or by casting operator

I1 = P1 ; Here "I1" is the object of Item class and "P1" is the object of Product class

-> Now if we solve this problem using constructor then we have to define the constructor inside the Item class

-> But if we try to solve this problem using casting operator, the we have to write the casting operator function inside the Product class
*/

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

    int getM()
    {
        return m;
    }

    int getN()
    {
        return n;
    }
};

class Item
{
private:
    int a, b;

public:
    void showData(void)
    {
        cout << "a = " << a << ", b = " << b << endl;
    }
    Item() {}
    Item(Product p)
    {
        this->a = p.getM(); // Created a function getM() which is the member function of Product class which will help to access the private member m;

        this->b = p.getN(); // Created a function getN() which is the member function of Product class which will help to access the private member mn;
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