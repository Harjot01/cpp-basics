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

    Node(int k, int d)
    {
        key = k;
        data = d;
    }
};

class CircularLinkedList
{
public:
    Node *head;

    CircularLinkedList()
    {
        head = NULL;
    }

    CircularLinkedList(Node *n)
    {
        head = n;
        n->next = head;
    }

    Node *nodeExists(int k)
    {
        Node *temp = NULL;
        Node *ptr = head;
        if (ptr == NULL) // This basically means that head is storing null value that is there is not node present in the linked list
        {
            return temp;
        }
        else
        {
            do
            {
                if (ptr->key == k)
                {
                    temp = ptr;
                }
                ptr = ptr->next;
            } while (ptr != head);
            return temp;
        }
    }

    void appendNode(Node *n)
    {
        if (nodeExists(n->key) != NULL)
        {
            cout << "Node already exists with the key value: " << n->key << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                n->next = head;
                cout << "Node Appended" << endl;
            }
            else
            {
                Node *ptr = head;
                while (ptr->next != head)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                n->next = head;
                cout << "Node Appended" << endl;
            }
        }
    }

    void prependNode(Node *n)
    {
        if (nodeExists(n->key) != NULL)
        {
            cout << "Node already exists with the key value: " << n->key << endl;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != head)
            {
                ptr = ptr->next;
            }
            ptr->next = n;
            n->next = head;
            head = n;
            cout << "Node Prepended" << endl;
        }
    }

    void insertNodeAfter(int k, Node *n)
    {
        Node *ptr = nodeExists(k);
        if (ptr == NULL)
        {
            cout << "No Node exists with the key value: " << k << endl;
        }
        else
        {
            if (nodeExists(n->key) != NULL)
            {
                cout << "Node already exits with the key value: " << n->key << endl;
            }
            else
            {
                if (ptr->next == head)
                {
                    ptr->next = n;
                    n->next = head;
                    cout << "Node Inserted at the End" << endl;
                }
                else
                {
                    n->next = ptr->next;
                    ptr->next = n;
                    cout << "Node Inserted in Between" << endl;
                }
            }
        }
    }

    void deleteNodeByKey(int k)
    {
        Node *ptr = nodeExists(k);
        if (ptr == NULL)
        {
            cout << "No Node exists with the key value: " << k << endl;  
        }
        else
        {
            if (ptr == head)
            {
                if (head->next == head)
                {
                    head = NULL;
                    cout << "Node UNLINKED" << endl;
                }
                else
                {
                    Node *ptr = head;
                    while (ptr->next != head)
                    {
                        ptr = ptr->next;
                    }
                    ptr->next = head->next;
                    head = head->next;
                    cout << "Node UNLINKED" << endl;
                }
            }
            else
            {
                Node *temp = NULL;
                Node *prev_ptr = head;
                Node *currentptr = prev_ptr->next;

                while (currentptr != NULL)
                {
                    if (currentptr->key == k)
                    {
                        temp = currentptr;
                        currentptr = NULL;
                    }
                    else
                    {
                        prev_ptr = prev_ptr->next;
                        currentptr = currentptr->next;
                    }
                }
                prev_ptr->next = temp->next;
                cout << "Node UNLINKED" << endl;
            }
        }
    }
    void updateNodeByKey(int k, int d)
    {
        Node *ptr = nodeExists(k);
        if (ptr != NULL)
        {
            ptr->data = d;
            cout << "Node Updated" << endl;
        }
        else
        {
            cout << "No Node exists with the key value: " << k << endl;
        }
    }

    void printList()
    {
        if (head == NULL)
        {
            cout << "Circular Linked List is Empty" << endl;
        }
        else
        {
            cout << endl
                 << "Circular Linked List Values : ";
            Node *temp = head;
            do
            {
                cout << "(" << temp->key << "," << temp->data << "," << temp->next << ") --> ";
                temp = temp->next;
            } while (temp != head);
        }
    }
};

int main()
{

    CircularLinkedList obj;
    int option;
    int key1, k1, data1;
    do
    {
        cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
        cout << "1. appendNode()" << endl;
        cout << "2. prependNode()" << endl;
        cout << "3. insertNodeAfter()" << endl;
        cout << "4. deleteNodeByKey()" << endl;
        cout << "5. updateNodeByKey()" << endl;
        cout << "6. print()" << endl;
        cout << "7. Clear Screen" << endl
             << endl;

        cin >> option;
        Node *n1 = new Node();
        // Node n1;

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            obj.appendNode(n1);
            // cout<<n1.key<<" = "<<n1.data<<endl;
            break;

        case 2:
            cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            obj.prependNode(n1);
            break;

        case 3:
            cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
            cin >> k1;
            cout << "Enter key & data of the New Node first: " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;

            obj.insertNodeAfter(k1, n1);
            break;

        case 4:

            cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
            cin >> k1;
            obj.deleteNodeByKey(k1);

            break;
        case 5:
            cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
            cin >> key1;
            cin >> data1;
            obj.updateNodeByKey(key1, data1);

            break;
        case 6:
            obj.printList();

            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "Enter Proper Option number " << endl;
        }

    } while (option != 0);

    return 0;
}