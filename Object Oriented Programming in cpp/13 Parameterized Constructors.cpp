// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> The constructor integer(), defined in the previous program, initializes the data members of all the objects to zero

-> However it may be necessary to initialize the various data elements of different objects with different values when they are created.

-> To achieve this objective we can pass arguments to the constructor function when the objects are created

-> Such constructors that can take arguments are called parameterized constructors

-> We cannot pass an object of the same class type as an argument to the constructor. Like A(A) this is wrong

-> However it can accept a reference to its own class as a parameter. Like A(A&) this is correct and such type of constructor is called a copy constructor
*/

class integer
{
    int m, n;

public:
    integer(int x, int y)
    {
        m = x;
        n = y;
    }

    void display()
    {
        cout << "m = " << m << endl;
        cout << "n = " << n << endl;
    }
};

int main()
{
    integer int1(100, 100); // Passing arguments when the object is instantiated
    int1.display();
    return 0;
}