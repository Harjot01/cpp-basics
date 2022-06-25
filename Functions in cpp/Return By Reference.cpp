// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int &max(int &, int &); // Prototype of a function with reference as its return type

int main()
{
    int a, b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    int max_num = max(a, b);
    cout<<"The maximum number is "<<max_num<<endl;
    return 0;
}

int & max(int &x, int &y) // This function returns the reference of the maximum number.
{
    if(x > y)
        return x;
    else
        return y;
}