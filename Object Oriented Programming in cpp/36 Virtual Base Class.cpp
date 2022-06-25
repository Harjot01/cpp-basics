// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> Virtual base classes are used in virtual inheritance in a way of preventing multiple "instances" of a given class appearing in an inheritance hierarchy when using multiple inheritances
*/

class student
{
protected:
    int roll_number;

public:
    void get_number(int roll_number)
    {
        this->roll_number = roll_number;
    }
    void put_number(void)
    {
        cout << "Roll No: " << roll_number << endl;
    }
};

class test : virtual public student // Using virtual keyword before inheritance
{
protected:
    float part1, part2;

public:
    void get_marks(float part1, float part2)
    {
        this->part1 = part1;
        this->part2 = part2;
    }

    void put_marks(void)
    {
        cout << "Marks obtained: " << endl;
        cout << "Part1 = " << part1 << endl;
        cout << "Part2 = " << part2 << endl;
    }
};

class sports : virtual public student // Using virtual keyword before inheritance
{
protected:
    float score;

public:
    void get_score(float score)
    {
        this->score = score;
    }
    void put_score(void)
    {
        cout << "Sports wt: " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = part1 + part2 + score;
        put_number();
        put_marks();
        put_score();

        cout << "Total Score: " << total << endl;
    }
};

int main()
{
    result student_1;
    student_1.get_number(123);
    student_1.get_marks(27.5, 33.0);
    student_1.get_score(6.0);
    student_1.display();
    return 0;
}
