// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }

    node()
    {
        data = 0;
        next = NULL;
    }
};
class linking
{
public:
    node *head;

    linking()
    {
        head = NULL;
    }

    linking(node *n)
    {
        head = n;
    }

    void appendNode(node *n)
    {
        
    }

};

int main()
{
    node n1(6);
    linking l1(&n1);
    return 0;
}