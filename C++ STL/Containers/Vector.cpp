// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    vector<int> v;
    cout << "Enter the total number of elements to push in the vector" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int elt;
        cout << "Enter the element " << i + 1 << endl;
        cin >> elt;
        v.push_back(elt);
    }
    printVec(v);
    return 0;
}