// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> Multilevel Inheritance

-> In multilevel inheritance a class can inherit features from more that one parent class

*/

class student
{
protected:
    int roll_number;

public:
    void get_number(int);
    void put_number(void);
};

void student ::get_number(int roll_number)
{
    this->roll_number = roll_number;
}

void student ::put_number(void)
{
    cout << "Roll Number: " << roll_number << endl;
}

class test : public student
{
protected:
    float sub1;
    float sub2;

public:
    void get_marks(float, float);
    void put_marks(void);
};

void test ::get_marks(float sub1, float sub2)
{
    this->sub1 = sub1;
    this->sub2 = sub2;
}

void test ::put_marks(void)
{
    cout << "Marks in SUB1 = " << sub1 << endl;
    cout << "Marks in SUB2 = " << sub2 << endl;
}

class result : public test
{
private:
    float total;

public:
    void display(void);
};

void result ::display(void)
{
    total = sub1 + sub2;
    put_number();
    put_marks();
    cout << "Total = " << total << endl;
}
int main()
{
    result student1;
    student1.get_number(123);
    student1.get_marks(75.0, 59.5);
    student1.display();

    return 0;
}