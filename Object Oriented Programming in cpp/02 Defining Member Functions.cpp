// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> By default the member functions inside the class are inline and the ones outside are not.

-> To make the outside functions inline we can use inline keyword
*/
class item
{
    int number;
    float cost;

public:
    void getdata(int a, float b); // member functions
    void putdata()                // member functions
    {
        // In this way we can declare a function inside a class
        cout << number << endl;
        cout << cost << endl;
    }
};

/*
-> Declaring member functions outside the class

-> We can define the member functions later outside the class using the class name and scope resolution operator(::)

syntax :-

return_type class_name :: function_name(argument declaration)
{
    function body
}
*/

inline void item ::getdata(int a, float b)
{
    number = a;
    cost = b;
}

inline void item ::putdata(void)
{
    cout << "Number: " << number << endl;
    cout << "Cost: " << cost << endl;
}

int main()
{
    item i1;
    i1.getdata(100, 75.5); // Accessing the member functions using the object name and dot operator
    i1.putdata();          // Accessing the member functions using the object name and dot operator
    return 0;
}