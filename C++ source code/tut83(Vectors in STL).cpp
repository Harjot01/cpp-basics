#include <iostream>
#include <vector>
using namespace std;

// Vector is the most general purpose container and it supports Dynamic Array

// Array size is fixed, no flexibility to grow or shrink during execution

int main()
{
    vector<int> v;                      // Zero length vector
    vector<int> v1{10, 20, 30, 40, 50}; // The default intitial capacity of the vector is 0 but when we inititalize it during the time of its declaration the intitial capacity becomes equal to the number of elements i.e. 5 in this case. And now it will be increasing as 5, 10, 20 and so forth.

    vector<char> v2(4);            // A vector with length 4 will be created
    vector<int> v3(5, 10);         // Creates a vector with length 5 with all fill the vector with 10
    vector<string> v4(3, "hello"); // creates a vector with length 3 and the vector has 3 blocks to store hello as the string value

    //cout<<v4.at(0); or
    //cout<<v4[0]<<endl; // Both of the methods print the first element of the vector v4 which is hello

    v1.push_back(60); // Appends 60 to the vector v1
    v1.pop_back();    // Removes the last element from the vector

    cout << v1.size() << endl;     // returns the number of elements in vector v1
    cout << v1.capacity() << endl; // returns the total number of memory blocks allocated for storing more elements
    //v1.clear();                    // It removes all elements from the vector
    //cout << v1.capacity() << endl;  // Capacity still remains the same
    //cout << v1.size(); // Size of the vector becomes 0

    cout << "First element is " << v1.front() << endl; // Returns first element
    cout << "Last element is " << v1.back() << endl;   // Returns last element

    
    return 0;
}