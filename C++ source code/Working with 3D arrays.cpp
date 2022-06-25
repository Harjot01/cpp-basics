#include <iostream>
using namespace std;

int main()
{
    int I, J, K;
    int i, j, k;
    int count = 1;
    cout << "Enter the value of I, J, K" << endl;
    cin >> I >> J >> K;
    int arr[I][J][K];

    for (i = 0; i < I; i++)
    {
        for (int j = 0; j < J; j++)
        {
            for (int k = 0; k < K; k++)
            {
                cout << "Enter the " << count << " element" << endl;
                cin >> arr[i][j][k];
                count++;
            }
        }
    }

    for (i = 0; i < I; i++)
    {
        for (j = 0; j < J; j++)
        {
            for (k = 0; k < K; k++)
            {
                cout << "test[" << i << "]"
                     << "[" << j << "]"
                     << "[" << k << "]"
                     << " = " << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}
