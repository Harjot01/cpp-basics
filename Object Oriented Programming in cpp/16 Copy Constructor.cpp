// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> A copy constructor is used to declare and initialize an object from another object.
eg :- integer I2(I1);

-> The process of initializing through a copy constructor is known as copy initialization.
eg :- I2 = I1, remember I1 and I2 are objects, this statement simple assigns the values of I1 to I2, member-by-member. This is the task of the overloaded assignment operator

-> A reference variable has been used as an argument to the copy constructor. We cannot pass the argument by value to a copy constructor.

-> When no copy constructor is defined the compiler supplies its own copy constructor
*/

class code
{
    int id;

public:
    code(){};
    code(int a) { id = a; }
    code(code &x)
    {
        id = x.id;
    }
    void display(void)
    {
        cout << id << endl;
    }
};

int main()
{
    code A(100); // Parameterized constructor is invoked

    code B(A); // Copy constructor is invoked

    code C = A; // Copy constructor invoked again

    code D;
    D = A; // Copy constructor not invoked, infact the overloaded assignment operator assigns the value member-by-member.

    cout << "\n id of A: ";
    A.display();
    cout << "\n id of B: ";
    B.display();
    cout << "\n id of C: ";
    C.display();
    cout << "\n id of D: ";
    D.display();

    return 0;
}