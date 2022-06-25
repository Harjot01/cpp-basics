// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v1 = {2, 3, 5, 6, 7}; // Vector of int
    vector<int>::iterator it1;
    for (it1 = v1.begin(); it1 != v1.end(); it1++)
    {
        cout << (*it1) << endl;
    }

    vector<pair<int, int>> v2 = {{1, 2}, {2, 3}, {3, 4}}; // Vector of pair
    vector<pair<int, int>>::iterator it2;

    for (it2 = v2.begin(); it2 != v2.end(); it2++)
    {
        cout << (*it2).first << " " << (*it2).second << endl;
    }

    // or we can access using the arrow operator

    for (it2 = v2.begin(); it2 != v2.end(); it2++)
    {
        cout << it2->first << " " << it2->second << endl;
    }

    // (*it1).first <=> (itr->first)
    return 0;
}