// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> Array of Pointers
*/

int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    int *arr1[size]; // Declaring array of pointers

    int arr2[size]; // Declaring an array

    cout << "Enter the elements of the array2" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr1[i] = &arr2[i]; // Array of pointers pointing the the array consisting of data items
    }

    for (int i = 0; i < size; i++)
    {
        cout << *arr1[i] << " ";
    }

    return 0;
}