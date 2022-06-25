// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> Static Memory Allocation
    -> In static memory allocation at compiler time itself the compiler decides that how much memory should be allocated.
    -> Static memory allocation is assigned to Stack
    -> We use it when we already know the memory space that we require in advance

-> Dynamic Memory Allocation
    -> In dynamic memory allocation the memory to be allocated is decided at the run time i.e. when our programs begins execution
    -> Dynamic memory allocation is assigned to Heap
    -> We used it when we don't have any idea about how much memory we require

-> To allocate memory dynamically we use "new" keyword which returns an address that we receive in a pointer variable
syntax:-

data_type *ptr = new data_type

-> The Dynamic variable that we have created using "new", it's life time is throughout the program

-> We can also create an array using DMA

example:- int *ptr = new int[5]; this returns the address of first memory block of the array.

-> Note here "new" keyword allocates memory dynamically but the memory allocated to the pointer variable that stores the value returned by "new" is using static memory allocation i.e. the memory required for ptr variable is already known at the compiler time of the program

-> Like we are allocating memory using "new" keyword in the similar way we can deallocate the memory using "delete" keyword

syntax:- delete ptr_name, this will release the memory address that the pointer holds
In case of an array we write "delete [] ptr_name "
*/

int main()
{
    int *ptr1 = new int(32); // points an address which contains value as 32
    int size;

    cout << "Enter the size of the array" << endl;
    cin >> size;

    int *ptr2 = new int[size]; // Initializing an array dynamically
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ptr2[i];
    }
    cout << "The elements of the array are" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ptr2[i] << " ";
    }

    // Freeing up the memory address that the pointers hold
    delete ptr1;
    delete[] ptr2;

    return 0;
}