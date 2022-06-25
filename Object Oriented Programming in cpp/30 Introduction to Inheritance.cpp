// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> The mechanism of deriving a new class from an old one is called inheritance

-> The old class is referred to as the base class and the new one is called the derived subclass

syntax to inherit :- 

class derived-class-name : visiblity-mode base-class-name
{
    //member of derived class
    ...
    ...
}

-> The visibility modes can be "Public", "Private" and "Protected"

                            Public derivation   Private Derivation    Protected Derivation
    1. Private members      Not Inherited       Not Inherited         Not Inherited
    2. Protected members    Protected           Private               Protected
    3. Public members       Public              Private               Protected


-> During inheritance visibility mode tells us that what kind of data of parent class can the derived class's object access 
*/

class A
{
private:
    int a;
protected:
    void setValue(int k)
    {
        a = k;
    }
};

class B : public A
{
public:
    void setData(int x)
    {
        setValue(x);
    }
};

int main()
{
    B obj;
    obj.setData(5);
}
