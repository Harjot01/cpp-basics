// Don't Overthink, Just Code
#include <bits/stdc++.h>

using namespace std;

void print(set<string> s)
{
    for (auto val : s)
    {
        cout << val << endl;
    }
}

int main()
{
    set<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("ghi");
    s.insert("jkl");
    auto it = s.find("def");

    if (it != s.end())
    {
        cout << (*it) << endl;
        // s.erase(it); // erasing by passing the iterator
        // s.erase("abc"); // erasing by passing the actual value
    }

    else
    {
        cout<<"element not found"<<endl;
    }
    print(s);
    return 0;
}