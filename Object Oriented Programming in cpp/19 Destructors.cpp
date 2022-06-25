// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> Destructor is an instance member function which is invoked automatically whenever an object is going to be destroyed

-> Meaning, a destructor is the last function that is going to be called before an object is destroyed

-> A destructor never takes any argument nor does it return any value.

-> As destructor takes no parameter, so it cannot be overloaded

-> The primary use of destructor is in freeing up the memory reserved by the object before it gets destroyed.

-> It is used to free dynamically allocated memory when one of the member/pointer in an object is pointing to an external memory location to avoid memory leak.

syntax:-

~class_name()
{
    body of destructor
}
*/

class test
{
private:
    int *a;
    int size;

public:
    test(int size)
    {
        this->size = size;
        a = new int[size];
        cout << "Constructed an integer array of size " << size << endl;
    }
    ~test()
    {
        delete[] a;
        cout << "\nFreed up the memory allocated for integer array" << endl;
    }
    void input_elements(void);
    void show_elements(void);
};

void test ::input_elements(void)
{
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
}

void test ::show_elements(void)
{
    cout << "The elements of the array are " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    test t1(5);
    t1.input_elements();
    t1.show_elements();
    return 0;
}