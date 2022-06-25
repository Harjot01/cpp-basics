// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> A function pointer is a variable that stores the address of a function that can later be called through  the function pointer. This is useful because functions encapsulate behavior.
*/

typedef void (*FunPtr)(int, int);

void add(int i, int j)
{
    cout << i << " + " << j << " = " << i + j;
}

void subtract(int i, int j)
{
    cout << i << " - " << j << " = " << i - j;
}

int main()
{
    FunPtr ptr;
    ptr = &add;
    ptr(1, 2);
    cout << "\n";
    ptr = &subtract;
    ptr(3, 2);

    return 0;
}