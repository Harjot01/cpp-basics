// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
The process in which a function calls itself directly in it's own body is called recursion
*/

// Program to calculate factorial of a number using recursion
// int fact(int n)
// {
//     if (n <= 1)
//         return 1;
//     else
//         return n * fact(n - 1);
// }

// int main()
// {
//     int num;
//     cout << "Enter a number" << endl;
//     cin >> num;
//     int factorial = fact(num);
//     cout << "The factorial of " << num << " is " << factorial << endl;
//     return 0;
// }

/*
Tower of Hanoi problem, a very famous problem for recursion
*/

void TOH(int d, char tower1, char tower2, char tower3)
{
    if (d == 1) // base case
    {
        cout << "Shift top disk from tower " << tower1 << " to tower " << tower3 << endl;
        return;
    }
    else
    {
        TOH(d - 1, tower1, tower3, tower2);
        cout << "Shift top disk from tower " << tower1 << " to tower " << tower3 << endl;
        TOH(d - 1, tower2, tower1, tower3);
    }
}

int main()
{
    int disk;
    cout << "Enter the number of disks" << endl;
    cin >> disk;
    if (disk < 1)
        cout << "There are no disks to shift" << endl;
    else
        cout << "There are " << disk << " disks in tower" << endl;

    TOH(disk, '1', '2', '3');
}