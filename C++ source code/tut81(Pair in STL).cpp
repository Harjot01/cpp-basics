#include <iostream>
using namespace std;

// Pair is not a container but it is the part of the standard template library and we don't need to include any header file in our program it is available by default. It can accept two different types of data types, which can be our custom data types i.e. classes or primitive data type.

class student
{
private:
    string name;
    int age;

public:
    void setStudent(string s, int a)
    {
        name = s;
        age = a;
    }

    void showStudent()
    {
        cout << "Name = " << name << endl
             << "Age = " << age << endl;
    }
};

int main()
{
    pair<string, int> p1;
    pair<string, string> p2;
    pair<string, float> p3;
    pair<int, student> p4;
    // Make pair function makes the pairs between different placeholders.
    p1 = make_pair("Rahul", 16);
    p2 = make_pair("India", "New Delhi");
    p3 = make_pair("Eat that frog", 340);
    student s1;
    s1.setStudent("Name", 19);
    p4 = make_pair(1, s1);

    cout << "pair 1" << endl;
    cout << p1.first << " " << p1.second << endl; // we can call the first and second place holders with .first and .second methods

    cout << "pair 2" << endl;
    cout << p2.first << " " << p2.second << endl;

    cout << "pair 3" << endl;
    cout << p3.first << " " << p3.second << endl;

    cout << "pair 4" << endl;
    cout << p4.first << " ";
    student s2 = p4.second;
    s2.showStudent();

    return 0;
}
