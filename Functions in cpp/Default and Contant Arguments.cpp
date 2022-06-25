// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the caller of the function doesn’t provide a value for the argument with a default value. In case any value is passed the default value is overridden

-> Note that only trailing arguments can have default value to a particular argument, we cannot provide the default value to a particular argument in the middle
*/

int sum(int x, int y, int z = 10)
{
    return (x + y + z);
}

int multiply(int x, const int y = 5) // If we declare a paramter as constant then we cannot alter it's value in the function body
{
    return (x * (++y));  // Will throw an error as Y is constant so we cannot increment it's value  
}

int main()
{
    int a, b, c;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;
    int total = sum(a, b); // We missed the third argument, so the compiler will replace the third arguments by default value of 10, but if we pass the third argument i.e. C then the default value which is 10 in this case will be overridden.
    cout<<"The sum is "<<total<<endl;

    int mul = multiply(a, b);
    cout<<mul<<endl;
    return 0;
}