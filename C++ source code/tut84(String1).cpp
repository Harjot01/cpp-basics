#include <bits/stdc++.h>
using namespace std; 

const int a = 0;
// string class is the child class of the pre-defined class known as basic_string
// String class has many constructors
int main()
{
    string s1; // Default constructor called string()
    char str[10] = "Hello"; 
    string s2(str); // overloaded constructor string(const char* str)
    string s3(s2); // another overloaded constructor string(const string &str)

    string str1;
    str1 = "Hello";
    string str2 = " students";
    str2 = str1 + str2;
    cout<<str2<<endl;
    return 0;
}

