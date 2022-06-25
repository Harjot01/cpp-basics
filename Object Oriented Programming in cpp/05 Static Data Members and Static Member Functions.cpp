// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
Static Variables

-> static variables is initialized to zero when the first object is created

-> Only one copy of the static member variables is created for the entire class and is shared by all the objects of the class.

-> Each static variable must be defined outside the class defination. This is important because the static data members are stored separately rather than as a part of a object

-> Since they are associated with the class itself rather than with any class object, they are also known as class variables


Static Member function

-> Static member functions can have access to only other static members(functions or variables) declared in the same class

-> Staic member function can be called using the class name(instead of its objects)

class_name :: function_name

*/

class item
{
    static int count;
    int number;

public:
    void getdata(int a)
    {
        number = a;
        count++;
    }

    void getcount(void)
    {
        cout << "count: " << count << endl;
    }
};
int item::count; // Defination of static data member

int main()
{
    item a, b, c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    cout << "After reading data" << endl;

    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}