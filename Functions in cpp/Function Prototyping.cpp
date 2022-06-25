// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int add(int, int); // Function prototyping is when we are just declaring the functions, the actual defination is below the main function

void display(...); // Function with open parameter list

int main()
{
    int a = 5, b = 6;
    int sum = add(a, b); // Here a and b are actual paramters
    cout << sum << endl;
    return 0;
}

int add(int x, int y) // The defination of add function, x and y are formal paramters
{
    int z = x + y;
    return z;
}

/*Note that the compiler first checks the protoyping over here and checks whether the argument types in the function prototype matches the argument in the function defination*/