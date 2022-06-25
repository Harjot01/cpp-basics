// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> When allocation of memory is done dynamically using dynamic memory allocator "new' in a constructor, it is known as dynamic constructor

-> Constructor can allocate dynamically created memory to the object

-> Object is going to use the memory region, which is dynamically allocated by the constructor

*/

class A
{
private:
    int a, b, *ptr;

public:
    A()
    {
        a = 0;
        b = 0;
    }

    A(int x, int y, int z) // Dynamic constructor
    {
        a = x;
        b = y;
        ptr = new int;
        *ptr = z;
    }

    void show(void)
    {
        cout << "a = " << a << ", b = " << b << ", c = " << *ptr << endl;
    }
};

int main()
{
    A o1, o2, o3(4, 5, 6);
    o3.show();
    return 0;
}