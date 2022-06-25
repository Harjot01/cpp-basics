// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
    cout << "Size: " << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    map<int, string> m;
    // m[key] = value;
    m[1] = "abc";
    m[2] = "cde";
    m[3] = "efg";

    // Or we can use insert function and pass a pair as an argument i.e. use makr_pair or use {}
    m.insert({4, "ghi"});

    // map<int, string> m;


    // To find a value we can use find function
    auto it = m.find(7);
    if (it == m.end())
    {
        cout << "No value" << endl;
    }
    else
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    // To erase any value we can use erase function, we can pass a key value as well as an iterator
    m.erase(3); 
    m.erase(it);

    print(m);
    return 0;
}