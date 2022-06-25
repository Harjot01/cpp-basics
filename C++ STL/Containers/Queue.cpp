// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // Printing the size
    cout << q.size() << endl;

    // Printing the last elements of the queue
    cout << q.back() << endl;

    // Printing the values inside the queue
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    // Swapping two queues

    queue<int> q2;
    q2.swap(q);

    // Printing the elements of the second queue
    while (!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }
    return 0;
}