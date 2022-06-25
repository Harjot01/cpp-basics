#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1("Amit");
    string s2("Amar");
    // s1.assign("Hello"); --> Use to the assign the value to the empty string

    // s1.append(" students"); --> Appends the value at the end of the string

    // s1.insert(2, "123");  --> Inserts the value at particular index

    // s1.replace(2, 2, "A"); --> replace(starting position, number of character to replace, replacement string)

    // s1.erase(); --> Erases whole of the string

    // int index = s1.find("online"); --> Returns the index of the given element of the string which in this case is 6

    // int index = s1.find("Harjot"); // If a false word is passed i.e. it does not exists in the given string then in that case it will return -1

    // int index = s1.rfind("online"); // Searches from the back of the string and returns its value i.e. reverse searching
    // cout<<index<<endl;

    //int i = s1.compare(s2); --> Compares one string to another

    int i = s1.size();
    cout<<i<<endl;

    return 0;
}