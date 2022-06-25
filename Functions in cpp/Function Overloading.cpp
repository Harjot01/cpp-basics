// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
Function Overloading

-> Overloading refers to the use of the same thing for different purposes.

-> This means we can use same function name to create functions that perform a variety of different tasks. This is known as function polymorphism in OOP

-> We should not overload unrelated functions and should reserve function overloading for functions that perform closely related tasks.
*/

int add(int, int);          // Function Prototype 1
int add(int, int, int);     // Function Prototype 2
double add(double, double); // Function Prototype 3
double add(int, double);    // Function Prototype 4
double add(double, int);    // Function Prototype 5

int main()
{
    // Function Calls
    cout << add(5, 10);     // Uses prototype 1
    cout << add(15, 10.0);  // Uses prototype 2
    cout << add(12.5, 7.5); // Uses prototype 3
    cout << add(5, 10, 15); // Uses prototype 4
    cout << add(0.75, 5);   // Uses prototype 5
    return 0;
}