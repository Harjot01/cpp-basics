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
    int N;
    cout << "Enter the size" << endl;
    cin >> N;
    vector<vector<int>> v; // All the elements are vectors and each element hold a vector
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int elt;
            cin >> elt;
            temp.push_back(elt);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        printVec(v[i]);
    }

    return 0;
}