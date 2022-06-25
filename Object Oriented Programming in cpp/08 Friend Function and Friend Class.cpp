// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
A friend function possesses certain special characterstics:

-> It is not in the scope of the class to which it has been declared as friend.

-> Since it is not in the scope of the class, it cannot be called using the object of that class.

-> It can be invoked like a normal function without the help of any object.

-> Unlike member functions, it cannot access the member names directly and has to use an object name and dot membership operator with each member name

-> It can be declared either in public or the private part of a class without affecting its meaning.

-> Usually, it has the objects as arguments.


-> Similary we can have a friend class also, i.e. if we declare all the member functions of one class as the friend of another class


*/

/*
Example of friend function
*/
class sample
{
    int a;
    int b;

public:
    void setvalue()
    {
        a = 25;
        b = 40;
    }
    friend float mean(sample s);
};

float mean(sample s)
{
    return float(s.a + s.b) / 2.0;
}

/*
Example of friend class
*/

class class_2;

class class_1
{
    int value1;

public:
    void indata(int a)
    {
        value1 = a;
    }
    void display(void)
    {
        cout << value1 << "\n";
    }
    friend void exchange(class_1 &, class_2 &);
};

class class_2
{
    int value2;

public:
    void indata(int a)
    {
        value2 = a;
    }
    void display(void)
    {
        cout << value2 << "\n";
    }
    friend void exchange(class_1 &, class_2 &);
};

void exchange(class_1 &x, class_2 &y)
{
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}

int main()
{
    class_1 c1;
    class_2 c2;

    c1.indata(100);
    c2.indata(200);

    cout << "Values before exchange" << endl;
    c1.display();
    c2.display();

    exchange(c1, c2);

    cout << "Values after exchange" << endl;
    c1.display();
    c2.display();

    return 0;
}