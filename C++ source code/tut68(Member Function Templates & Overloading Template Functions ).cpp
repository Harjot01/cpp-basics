#include <iostream>
using namespace std;

template<class T>
class myClass
{
    public:
    T data;
    myClass(T a)
    {
        data = a;
    }

    void display();
};

template<class T>
void myClass<T> ::display()
{
    cout<<"The value of data is "<<data<<endl;
}

int main(){
    myClass <int>m(5);
    m.display();
    return 0;
}

#include <iostream>
using namespace std;

template<class T>
class myClass
{
    public:
    T data;
    myClass(T a)
    {
        data = a;
    }

    void display();
};

template<class T>
void myClass<T> ::display()
{
    cout<<"The value of data is  "<<data<<endl;
}

void func(int a)
{
    cout<<"I am first func() "<<a<<endl;
}

template <class D>
void func(D a)
{
    cout<<"I am templatised function "<<a<<endl;
}

int main(){
    int m = 5;
    func(m);
    func<int>(m);
    return 0;
}