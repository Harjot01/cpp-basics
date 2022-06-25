#include <iostream>
#include <vector>

using namespace std;

void printVec(vector<int> &v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // Here we can imagine that v[i] refers to vector
    }
    cout << endl;
}

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> v; // This will create vector of vectors
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        printVec(v[i]);
    }

    return 0;
}