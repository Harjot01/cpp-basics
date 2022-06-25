#include <bits/stdc++.h>
using namespace std;

// Maps are used to replace associative array

// There are two types of array-> Numeric arrays and associative arrays

// What we have learned up till now in c++ are numeric arrays

// Associate arrays are like key and value pairs where each key should be unique and these keys cannot be altered later, they are almost same as dictionaries in python

// Maps always arrange it keys in sorted arrays and in case the key are of string type, they are sorted in dictionary order.

int main()
{
    map<int, string> customer;
    customer[100] = "Gajendra";
    customer[123] = "Dilip";
    customer[145] = "Aditya";
    customer[171] = "Shahid";
    customer[200] = "Rajesh";

    map<int, string> c{{100, "Gajendra"}, {123, "Dilip"}, {145, "Aditya"}, {171, "Shahid"}, {200, "Rajesh"}}; // Map can be created in this way also

    // To obtain single values both at and [] can be used
    //customer[100];
    //or
    //customer.at(100);

    map<int, string>::iterator p = customer.begin(); // Using iterator
    while (p != customer.end())
    {
        cout << p->second << endl;
        p++;
    }
    //cout<<customer.size(); // Returns the size of the map

    //customer.clear(); // Deletes all the elements of the map
    //cout<<customer.empty(); // Returns a boolean value and tells if they map is empty or not

    customer.insert(pair<int, string>(205, "Harjot Singh")); // To insert a value in map we can use a pair

    return 0;
}