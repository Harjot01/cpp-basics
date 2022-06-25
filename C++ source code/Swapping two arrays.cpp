#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> data_array1 = {1, 2, 3, 4, 5};
    array<int, 5> data_array2 = {11, 22, 33, 44, 55};
    cout << "Values before swapping are: " << endl;
    for (int i = 0; i < sizeof(data_array1) / 4; i++)
    {
        cout << data_array1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < sizeof(data_array2) / 4; i++)
    {
        cout << data_array2[i] << " ";
    }
    cout << endl;
    data_array1.swap(data_array2);
    cout << "Value after swapping are: " << endl;
    for (int i = 0; i < sizeof(data_array1) / 4; i++)
    {
        cout << data_array1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < sizeof(data_array2) / 4; i++)
    {
        cout << data_array2[i] << " ";
    }

    cout << "The size of data_array1 is " << data_array1.size() << endl;
    cout << "The size of data_array2 is " << data_array2.size() << endl;

    return 0;
}