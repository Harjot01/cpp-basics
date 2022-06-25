// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int rear;
    int front;
    int capacity;
    int arr[];

public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        rear = -1;
        front = -1;
        for (int i = 0; i < capacity; i++)
        {
            arr[i] = 0; // 0 means that the Queue is empty
        }
    }

    bool isEmpty()
    {
        if (rear == -1 && front == -1)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if (rear == capacity - 1 && front == 0)
            return true;
        else
            return false;
    }

    int enqueue(int value)
    {
        if(isFull())
        {
            cout<<"Queue is Full"<<endl;
            return 0;
        }
        else if(isEmpty())
        {
            rear = 0;
            front = 0;
            arr[rear] = value;
            return value;
        }
        else
        {
            rear++;
            arr[rear]
        }
    }
};

int main()
{

    return 0;
}