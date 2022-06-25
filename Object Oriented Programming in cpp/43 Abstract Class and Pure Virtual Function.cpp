// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> A pure virtual function declared in a base class that has no defination relative to the base class

-> A class which contains at least one pure virtual function is called an abstract class

-> We can inherit it, but we need to override the pure virtual functions in the derived class

-> We cannot create object of an abstract class

-> The main objective of an abstract base class is to provide some traits to the derived class and to create a base pointer required for achieving run time polymorphism
*/

class Person
{
public:
    virtual void fun()=0; // Pure virtual function
};

class student : public Person
{
public:
    void fun(){ } // It is necessary to override the pure virtual function in the parent class
};

int main()
{
    return 0;
}