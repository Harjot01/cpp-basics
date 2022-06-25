// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class A
{
private:
    int a;
public:
    void f1()
    {}
    virtual ~A(){}
};

class B : public A
{
private:
    int b;
public:
    void f2(){}
    ~B(){}
};
int fun()
{
    A *p = new B;
    p->f1();
    //p->f2(); // Due to early binding this line throws an error, to fix this we will use virtual keyword in the destructor of parent class
    delete p;
    
}
int main()
{
    
    return 0;
}