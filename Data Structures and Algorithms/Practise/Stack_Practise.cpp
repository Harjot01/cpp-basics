// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int top;
    int capacity;
    int arr[];

public:
    Stack() {}
    Stack(int capacity)
    {
        this->capacity = capacity;
        top = -1;
        for (int i = 0; i < capacity; i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if (top == capacity - 1)
            return true;
        else
            return false;
    }

    void push(int elt)
    {
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = elt;
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        else
        {
            int poped_val = arr[top];
            arr[top] = 0;
            top--;
            return poped_val;
        }
    }

    int peek(int index)
    {
        if (index >= 0 && index < capacity)
            return arr[index];
        else
            cout << "Invalid Index" << endl;
    }

    void change(int index, int value)
    {
        if (index >= 0 && index < capacity)
            arr[index] = value;
        else
            cout << "Invalid Index" << endl;
    }

    void display()
    {
        cout << "Displaying all the values in the stack" << endl;
        for (int i = capacity - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int count()
    {
        return (top + 1);
    }
};

int main()
{
    int size;
    cout << "Enter the size of the stack" << endl;
    cin >> size;
    Stack s(size);
    s.push(7);
    s.push(6);
    s.push(8);
    s.display();
    s.pop();
    s.pop();
    s.change(0, 1);
    s.push(9);
    s.push(9);
    s.display();
    cout << "The total elements in the stack are   " << s.count();
    return 0;
}