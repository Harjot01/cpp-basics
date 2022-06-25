#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void showData()
    {
        cout << "a = " << a << endl
             << "b = " << b << endl;
    }

    friend ostream& operator<<(ostream&, Complex);
    friend istream& operator>>(istream& ,Complex&);
};

//insertion operator overloading
ostream& operator<<(ostream& print, Complex obj)
{
    cout<<"a = "<<obj.a<<endl<<"b = "<<obj.b<<endl;
}

//extraction operator overloading
istream& operator>>(istream& scan,Complex &obj)
{
    cin>>obj.a>>obj.b;
}

int main()
{
    Complex c1;
    cout<<"Enter a complex number"<<endl;
    cin>>c1; //operator>>(cin, c1) 
    cout<<"You entered"<<endl;
    cout<<c1;//operator<<(cout, c1); 
    return 0;
}