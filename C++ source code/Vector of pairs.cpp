#include <iostream>
#include <vector>
using namespace std;

// Vector of pairs -> means that all the elements of the vector are pairs

void printVec(vector<pair<int, int>> &v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl; // Here we can imagine that v[i] refers to pair
    }
}

int main()
{
    vector<pair<int, int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    printVec(v);
    return 0;
}