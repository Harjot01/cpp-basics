// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int size)
{
    int min;
    for (int i = 0; i < size; ++i)
    {
        min = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }

        // Swapping with the leading elements
        if (min != i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

// Swapping
int Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        bool isSwapped = false;
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                Swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if (!isSwapped)
            break;
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    BubbleSort(arr, size);

    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}