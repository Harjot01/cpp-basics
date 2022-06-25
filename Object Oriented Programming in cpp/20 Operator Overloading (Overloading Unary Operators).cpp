// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> When an operator is overloaded with multiple definations, it is known as operator overloading

-> It is a way to implement compile time polymorphism

-> Any operator can be overloaded if it is a valid operator in C language like we can not overload "sizeof", "?:" and "::" operators
*/

class integer
{
    int x;
    int y;
    int z;

public:
    integer(int, int, int); // Constructor declaration
    void display(void);
    friend void operator-(integer &);       // Overloading unary minus operator using friend function
    friend void operator++(integer &);      // Overloading pre-increment operator
    friend void operator++(integer &, int); // Overloading post-increment operator
    friend void operator--(integer &);      // Overloading pre-decrement operator
    friend void operator--(integer &, int); // Overloading post-decrement operator
};

integer ::integer(int a, int b, int c) // Constructor declaration
{
    x = a;
    y = b;
    z = c;
}

void integer ::display(void)
{
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}

void operator-(integer &s)
{
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
}

void operator++(integer &i)
{
    i.x = ++i.x;
    i.y = ++i.y;
    i.z = ++i.z;
}
void operator++(integer &i, int)
{
    i.x = i.x++;
    i.y = i.y++;
    i.z = i.z++;
}
void operator--(integer &i)
{
    i.x = --i.x;
    i.y = --i.y;
    i.z = --i.z;
}
void operator--(integer &i, int)
{
    i.x = i.x--;
    i.y = i.y--;
    i.z = i.z--;
}

int main()
{
    integer s1(10, -1, 5);
    cout << "Calling display before using overloaded unary operator" << endl;
    s1.display();

    s1++;

    cout << "Calling display after using overloaded unary operator" << endl;
    s1.display();
    return 0;
}