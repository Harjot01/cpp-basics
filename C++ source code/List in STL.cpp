#include <iostream>
#include <list>
using namespace std;

// Vector supports random access but the List can be accessed sequentially only.

// List can be accessed front to back and back to front.

int main()
{
    list<int> l1{11, 45, 34, 66, 23, 77, 56};
    list<string> l2{"India", "Kathmandu", "Islamabad", "Dakka"};

    l2.push_back("America");   // To append the value
    l2.push_front("Karanchi"); // To insert the value in the front

    //l1.pop_back();  // Removes the value from the end
    //l1.pop_front(); // Removes the value from front

    //l1.sort(); // Sorts the list
    //l1.reverse(); // Reverses the list i.e. if we first sort the list and then reverse it then we will say that we sorted the list in descending order

    //l1.remove(45); // Removes the element by giving that element name as an argument

    l1.clear(); // Removes all the elements in the list
    // Creating an iterator
    list<int>::iterator p = l1.begin(); // Basically iterator is a pointer
    while (p != l1.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl
         << "Total values in the list are " << l1.size(); // Size functions returns the size of the function

    return 0;
}