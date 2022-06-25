// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

// Overloading the pointer-to-member (->) operator

class test
{
public:
    int num;
    test(int j)
    {
        num = j;
    }
    test *operator->(void)
    {
        return this;
    }
};

int main()
{
    test T(5);
    test *ptr = &T;
    cout << "T.num = " << T.num << endl; // Accessing num normally

    cout << "ptr->num = " << ptr->num << endl; // Accessing num using normal object pointer

    cout << "T->num = " << T->num << endl; // Accessing num using overloaded -> operator
    return 0;
}