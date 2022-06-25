// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> A constructor is a 'special' member function whose task is to initialize the objects of its class. It is special because its name is the same as the class name. 

-> The constructor is invoked whenever an object of its associated class is created. 

-> It is called constructor because it contains the values of data members of the class

The constructor functions have special characterstics. These are:

-> They should be declared in the public section

-> They are invoked automatically when the objects are created

-> They do not have any return types, not even void and therefore they cannot return any value

-> They cannot be inherited, though a derived class can call the base class constructor.

-> Like C++ functions they can have default arguments

-> Constructors cannot be virtual

-> We cannot refer to their addresses

-> They make 'implicit calls' to the operators new and delete when the memory allocation is required

-> If no such constructor is defined, then the compiler supplies a default constructor

-> If we have defined any of the constructor inside the class, then the compiler will not supply it's default constructor, in such cases we have to define our own default constructor

*/

class integer
{
    int m, n;
public:
    integer(void)
    {
        m = 0;
        n = 0;
    }
};

int main()
{
    integer int1; // Because of the constructor, the values of private data members m and n are intialized to zero for int1 object
    return 0;
}