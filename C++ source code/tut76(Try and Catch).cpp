#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x = -1;
    try
    {   
        cout<<"Entering in try block \n";
        if(x < 0)
        {   
            cout<<"This line will execute as it is before throw \n";
            throw x;
            cout<<"This line will not execute as it is after throw \n";
        }
    }
    catch(int e)
    {
        cout<<"Exception caught: "<<e<<endl;
    }

    cout<<"This line will execute after catch block \n";
    
       
    return 0;
}