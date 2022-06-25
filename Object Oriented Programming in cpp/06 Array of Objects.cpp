// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> The array of variables that are of type class are called array of objects.

-> An array of objects is stored inside the memory in the same way as a multi-dimensional array
*/

class employee
{
    char name[30];
    float age;

public:
    void getdata();
    void putdata();
};

void employee ::getdata()
{
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the age: ";
    cin >> age;
}

void employee ::putdata()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}
const int size = 3;

int main()
{
    employee manager[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Details of Manager " << i + 1 << endl;
        manager[i].getdata();
    }
    cout << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << "Details of Manager " << i + 1 << endl;
        manager[i].putdata();
    }

    return 0;
}