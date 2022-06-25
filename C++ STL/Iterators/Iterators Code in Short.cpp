// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 5, 6, 7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    // Range based loop, instead of writing above long code we can just simply write:
    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;

    // Using Range based loops with vector of pair
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    for (pair<int, int> &value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }

    // We can use auto keyword for the declaration of an iterator
    // for example
    auto a = 10; // This will automatically detect the data type of 'a' that is integer
    cout << a << endl;

    for (auto it1 = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << " ";
    }
    return 0;
}