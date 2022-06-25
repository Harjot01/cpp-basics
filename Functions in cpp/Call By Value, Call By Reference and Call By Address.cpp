// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

void swap1(int, int); // Prototype of Call By Value

void swap2(int &, int &); // Prototype of Call By Reference

void swap3(int *, int *); // Prototype of Call By Address

int main()
{
    int x, y;
    cout << "Enter the values of x and y" << endl;
    cin >> x >> y;
    cout << "************** Call By Value **************" << endl;
    swap1(x, y);
    cout << "The values after swapping are" << endl;
    cout << "x = " << x << " "
         << "y = " << y << endl;

    cout << "\n";

    cout << "************** Call By Reference **************" << endl;
    swap2(x, y);
    cout << "The values after swapping are" << endl;
    cout << "x = " << x << " "
         << "y = " << y << endl;
    cout << "\n";

    cout << "************** Call By Address **************" << endl;
    swap3(&x, &y);
    cout << "The values after swapping are" << endl;
    cout << "x = " << x << " "
         << "y = " << y << endl;
    return 0;
}

void swap1(int a, int b) // Call by value just copies the value of arguments in the function parameters, so the function does not have the access of the actual variables
{
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int &a, int &b) // When we pass the arguments by reference, the formal arguments in the called function becomes aliases to the actual arguments in the calling function i.e. when the function is working with its own arguments, it is actually working on the orginal data.
{
    int temp = a;
    a = b;
    b = temp;
}

void swap3(int *a, int *b) // This is known as Call By Address and is accomplished using pointers i.e. they will store the addresses of the actual arguments
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}