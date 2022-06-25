// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> Single inheritace is one in which the derived class inherits the single base class either publically, privately or protectedly.
*/

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }

    Employee() {}
};

// Derived class
class Programmer : protected Employee
{
public:
    int language_code;
    Programmer(int inpId)
    {
        id = inpId;
        language_code = 9;
    }
    void showData(void)
    {
        cout << "id = " << id << endl;
        cout << "language_code = " << language_code << endl;
    }
};

int main()
{
    Programmer harjot(1);
    harjot.showData();
    return 0;
}