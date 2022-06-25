// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> When the address of a member of a class is assigned to a pointer

-> The address of a member can be obtained by applying the operator & to a class member name

->  A class member pointer can be declared using the operator ::* with the class name.

syntax
class_name ::* ptr_name :: &class_name :: data_member

-> Similarly we can create pointer to member function
(object-name. *pointer-to-member function) (10);

*/

class A
{
public:
    int m;
    void show();
};

// int main()
// {

//     int A ::*ip = &A ::m;
//     A a;
//     a.*ip = 10;
//     cout << "The value of a is " << a.*ip << endl;
//     return 0;
// }

class M
{
    int x;
    int y;

public:
    void set_xy(int a, int b)
    {
        x = a;
        y = b;
    }
    friend int sum(M m);
};

int sum(M m)
{
    int M ::*px = &M ::x;
    int M ::*py = &M ::y;
    int S = m.*px + m.*py;
    return S;
}

int main()
{
    M n;
    void (M ::*pf)(int, int) = &M ::set_xy;
    (n.*pf)(10, 20);
    cout << "SUM = " << sum(n) << "\n";
    return 0;
}