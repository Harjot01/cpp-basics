// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

struct Array
{
    int A[5];
    int lentgh;
    int capacity;
};

void rotation(Array &arr)
{
    int first_ele = arr.A[0];
    for (int i = 0; i < arr.lentgh; i++)
    {
        arr.A[i] = arr.A[i + 1];
    }
    arr.A[arr.lentgh - 1] = first_ele;
}

void display(Array arr)
{
    for (int i = 0; i < arr.capacity; i++)
    {
        cout << arr.A[i]<<" ";
    }
}

int main()
{
    Array arr = {{1, 2, 3, 4, 5}, 5, 5};
    rotation(arr);
    rotation(arr);
    display(arr);
}
