// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> When both the derived and base class contains constructors, the base constructor is executed first and then the constructor in the derived class is executed

-> In case of multiple inheritance, the base class are constructed in the order in which they appear in the declaration of the derived class

for example :- class C : public A, public B

Here class 'C' is inherited from two classes 'A' and 'B', the constructor of class 'A' will be invoked before the constructor of class 'B'

-> In multilevel inheritance, the constructors will be executed in the order of inheritance

syntax :- for constructors in derived classes

	D(int a1, int a2, float b1, float b2, int d1) : A(a1, a2), B(b1, b2)
	{
		d = d1; // executes it's own body
	}

-> In case of destructors, first the derived class's constructors is invoked and then the parent class's constructor is invoked

*/

class alpha
{
private:
	int x;

public:
	alpha(int i)
	{
		x = i;
		cout << "alpha initialized" << endl;
	}
	void show_x(void)
	{
		cout << "x = " << x << endl;
	}
};

class beta
{
private:
	float y;

public:
	beta(float j)
	{
		y = j;
		cout << "beta initialized" << endl;
	}
	void show_y(void)
	{
		cout << "y = " << y << endl;
	}
};

class gamma : public beta, public alpha
{
private:
	int m, n;

public:
	gamma(int a, float b, int c, int d) : alpha(a), beta(b) // beta class's  constructor is invoked first as in the order of inheritance, gamma class is first inherited by beta class
	{
		m = c;
		n = d;
		cout << "gamma initialized" << endl;
	}

	void show_mn(void)
	{
		cout << "m = " << m << endl;
		cout << "n = " << n << endl;
	}
};

int main()
{
	gamma g(5, 10.75, 20, 30);
	cout << "\n";
	g.show_x();
	g.show_y();
	g.show_mn();
	return 0;
}