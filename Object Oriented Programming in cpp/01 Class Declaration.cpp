// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> Private and Public are visibility labels, under private all the data members and member functions cannot be accessed directly by the objects but under public they can be accessed directly

-> Generally data members are under private and member functions are under public as only member functions can access the private data members.

-> Private keyword is optional as by default the class members are private, but it's a good practise to write private as it makes the code more readable.
*/

class class_name
{
private:
    // data members;
    // member functions
public:
    // data members;
    // member functions;
};

int main()
{
    class_name n1; // n1 is the object of class_name

    return 0;
}
