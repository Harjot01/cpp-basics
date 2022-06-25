// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // Printing the size
    cout << s.size() << endl;

    // Printing the elements of the stack
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}