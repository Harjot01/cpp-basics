// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
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
    cin >> N;
    vector<int> v[N]; // This is array of vectors and all the elements will store a vector
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter the size of vector " << i + 1 << endl;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int elt;
            cin >> elt;
            v[i].push_back(elt);
        }
    }

    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }

    return 0;
}