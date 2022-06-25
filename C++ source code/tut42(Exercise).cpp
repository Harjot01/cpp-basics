#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    int num1, num2, n;

public:
    void set_number()
    {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }
    void addition()
    {
        cout << (num1 + num2) << endl;
    }
    void subtraction()
    {
        cout << (num1 - num2) << endl;
    }
    void multiplication()
    {
        cout << (num1 * num2) << endl;
    }
    void division()
    {
        cout << (num1 / num2) << endl;
    }

    int arithemetic()
    {
        cout << "which operation you want to perform(add, sub, mul, div)" << endl;
        cout << "Enter 1 to add, 2 to subtract, 3 to multiply and 4 to divide" << endl;
        cin >> n;
        if (n == 1)
        {
            cout << "The addition of these two number is " << endl;
            addition();
        }

        else if (n == 2)
        {
            cout << "The subtraction of these two number is " << endl;
            subtraction();
        }

        else if (n == 3)
        {
            cout << "The multiplication of these two number is " << endl;
            multiplication();
        }

        else if (n == 4)
        {
            cout << "The division of these two number is " << endl;
            division();
        }
    }
};

class ScientificCalculator : public SimpleCalculator
{
protected:
    int x, n1;

public:
    void set_number()
    {
        cout << "Enter the number: " << endl;
        cin >> x;
    }
    void square()
    {
        cout << x * x << endl;
    }

    void squareRoot()
    {
        cout << sqrt(x) << endl;
    }

    void sinx()
    {
        cout << sin(x) << endl;
    }
    void cosx()
    {
        cout << cos(x) << endl;
    }
    void tanx()
    {
        cout << tan(x) << endl;
    }

    int Arithemetic()
    {
        cout << "Which scientific operation do you want to perform(square, square root, sin, cos, tan)" << endl;
        cout << "Enter 1 to calculate square, enter 2 to calculate square root, enter 3 to calculate sin, enter 4 to calculate cos, enter 5 to calculate tan" << endl;
        cin >> n1;

        if (n1 == 1)
        {
            cout << "The square of this number is " << endl;
            square();
        }

        else if (n1 == 2)
        {
            cout << "The square root of this number is " << endl;
            squareRoot();
        }

        else if (n1 == 3)
        {
            cout << "The sin of this number is " << endl;
            sinx();
        }

        else if (n1 == 4)
        {
            cout << "The cosine of this number is " << endl;
            cosx();
        }
        else if (n1 == 5)
        {
            cout << "The tangent of this number is " << endl;
            tanx();
        }
    }
};

class HybridCalculator : public ScientificCalculator
{
};

int main()
{
    HybridCalculator h;
    h.set_number();
    h.arithemetic();
    return 0;
}
