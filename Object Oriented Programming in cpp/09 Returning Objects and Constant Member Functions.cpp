// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> If a member function does not alter any data in the class, then we may declare it as a const member function.

-> Only constant objects can call constant member functions.


syntax
void mul(int, int) const;
double get_balance() const;
*/


// Calculating the transpose of a matrix
class matrix
{
    int arr[3][3];

public:
    void read(void)
    {
        cout << "Enter the elements of 3x3 matrix" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }
    }

    void display(void)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j]<<" ";
            }
            cout << endl;
        }
    }
    friend matrix transpose(matrix);
};

matrix transpose(matrix m1)
{
    matrix m2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m2.arr[i][j] = m1.arr[j][i];
        }
    }
    return m2;
}

int main()
{
    matrix mat1, mat2;
    mat1.read();
    cout << "You entered the following matrix" << endl;
    mat1.display();

    mat2 = transpose(mat1);
    cout << "Transposed matrix" << endl;
    mat2.display();
    return 0;
}