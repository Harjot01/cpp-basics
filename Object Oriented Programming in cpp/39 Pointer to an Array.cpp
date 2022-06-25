// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> Pointer to an array

-> Performing linear search in an array using pointers
*/

int main()
{
    int arr[10] = {1, 99, 4, 37, 88, 3, 19, 45, 62, 87};
    int *ptr, num;

    ptr = arr;
    cout<<"Enter the element to be searched"<<endl;
    cin>>num;
    for (int i = 0; i < 10; i++)
    {
        if(*ptr == num)
        {
            cout<<num<<" found at index position "<<i+1<<endl;
            break;
        }
        else if(i == 9)
        {
            cout<<num<<" is not present in the array"<<endl;
        }
        ptr++;
    }
    
    return 0;
}