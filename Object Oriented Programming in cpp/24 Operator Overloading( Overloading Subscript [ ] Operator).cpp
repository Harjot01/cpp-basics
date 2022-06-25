// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

// Overloading subscript operator to access the private array elements of the object

class arr
{
    int a[5];

public:
    arr(int *s)
    {
        for (int i = 0; i < 5; i++)
        {
            a[i] = s[i];
        }
    }

    int operator[](int k)
    {
        return a[k];
    }
};

int main()
{
    int x[5] = {1, 2, 3, 4, 5};
    arr A(x);
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << "\t";
    }

    return 0;
}