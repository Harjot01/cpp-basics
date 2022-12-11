// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int key;
    int data;
    Node *next;
    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }

    Node(int key, int data)
    {
        this->key = key;
        this->data = data;
        next = NULL;
    }
};

class Queue
{
public:
    Node *front;
    Node *rear;
    int item_count;

    Queue()
    {
        front = NULL;
        rear = NULL;
        item_count = 0;
    }

    Queue(Node *n)
    {
        front = n;
        rear = n;
    }

    Node *keyExists(int key)
    {
        Node *temp = front;
        Node *ptr = NULL;
        while (temp != NULL)
        {
            if (temp->key == key)
            {
                ptr = temp;
                return ptr;
            }
            temp = temp->next;
        }
        return ptr;
    }

    bool isEmpty()
    {
        if (front == NULL and rear == NULL)
            return true;
        else
            return false;
    }

    void Enqueue(Node *n)
    {
        if (keyExists(n->key) != NULL)
            cout << "Node already exists with the key value of " << n->key << endl;
        else
        {
            if (front == NULL and rear == NULL)
            {
                front = n;
                rear = n;
                item_count++;
            }

            else
            {
                rear->next = n;
                rear = n;
                item_count++;
            }
        }
    }

    Node *Dequeue()
    {
        Node *temp = NULL;
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
        }
        else if (front == rear)
        {
            temp = front;
            front = NULL;
            rear = NULL;
            item_count--;
            cout << "Node Unlinked" << endl;
        }
        else
        {
            temp = front;
            front = front->next;
            item_count--;
            cout << "Node Unlinked" << endl;
        }
    }

    int Count()
    {
        return item_count;
    }

    void Display()
    {
        cout << "Displaying all the values inside the queue" << endl;
        Node *temp = front;
        while (temp != NULL)
        {
            cout << "(" << temp->key << ", " << temp->data << ") --> ";
            temp = temp->next;
        }
    }
};

int main()
{
    Node n1(1, 2);
    Node n2(1 , 6);

    Queue q;
    q.Enqueue(&n1);
    q.Enqueue(&n2);

    q.Display();

    cout << q.Count() << endl;

    return 0;
}