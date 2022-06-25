// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> Base class pointer can point to the object of any of its descendant class

-> But the converse is not true

-> At compile time to which address does the pointer points to is not known

-> At early binding or compile time the compiler will look at the data type of the pointer and not the content of the pointer

-> But at runtime the content of the pointer in known

-> Virtual functions fix the problem with method overriding

-> Virtual functions are created inorder to achieve late binding
*/

// Example of virtual functions

class A
{
public:
    void f1(){ }
};

class B : public A
{
public:
    void f1(){ }
    void f2(){ }
};

int main()
{
    A *p, o1;
    B o2;
    p = &o2;
    p->f1(); // This will call f1() of class A, but if we use virtual keyword the compiler ensures to do dynamic binding i.e. now f1() of class B will be called
    return 0;
}