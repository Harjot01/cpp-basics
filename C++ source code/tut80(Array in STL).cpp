#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> data_array1 = {11, 22, 33, 44, 55};
    array<int, 5> data_array2 = {1, 2, 3, 4, 5};
    // cout<<data_array.at(3); returns value at index 3

    //cout<<data_array1[3];    This also returns value at index 3

    //cout<<data_array1.front(); // This returns the first element of the array

    //cout<<data_array1.back(); // This returns the last element of the array

    /*
    data_array1.fill(10); // This fills the array with 10 at all the indexes
    for (int i = 0; i < sizeof(data_array1)/4; i++)
    {
        cout<<data_array1[i]<<" ";
    }
    */

    /*
    data_array1.swap(data_array2); // This swaps the elements of the two arrays but the rule is that both should have the same type and size
    for (int i = 0; i < sizeof(data_array1) / 4; i++)
    {
        cout << data_array1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < sizeof(data_array2) / 4; i++)
    {
        cout << data_array2[i] << " ";
    }
    */

    //cout << data_array1.size(); // This returns the size of the array
    

    return 0;
}
