// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> Classes can be defined and used inside a function or a block. Such classes are called local classes

-> Local classes can use global variables(declared above the function) and static variables inside the function but cannot use automatic local variables

-> Local classes cannot have static member functions and the member functions must be defined inside the local classes

-> Enclosing function cannot access the private members of a local class. However, we can achieve this by declaring the enclosing function as a friend
*/

void test(int n)
{
    class student
    {
    };
    student s1;
}

int main()
{

    return 0;
}