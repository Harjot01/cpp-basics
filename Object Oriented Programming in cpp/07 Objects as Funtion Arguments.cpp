// Don't Overthink, Just Code
#include <iostream>
using namespace std;

/*
-> Object may be used as a function argument and it can be done in two ways:

   -> A copy of the entire object is passed to the function (Pass By Value)
        Here any changes made to the object inside the function do not affect the object used to call the function

   -> Only the address of the object is transferred to the function (Pass By reference)
        When an address of the object is passed, the called function works directly on the actual object used in the call, this means that any changes made to the object inside the function will reflect in the actual object

    The pass by reference method is more efficient since it requires to pass only the address of the object and not the entire object
*/

class time
{
    int hours;
    int minutes;

public:
    void gettime(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    void puttime(void)
    {
        cout << hours << " hours and ";
        cout << minutes << " minutes" << endl;
    }

    void sum(time, time); // declaration with objects as arguments

};

void time :: sum(time t1, time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes/60;
    minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;
}

int main()
{
    time T1, T2, T3;
    T1.gettime(2, 45);
    T2.gettime(3, 30);

    T3.sum(T1, T2);

    cout<<"T1 = ";
    T1.puttime();

    cout<<"T2 = ";
    T2.puttime();

    cout<<"T3 = ";
    T3.puttime();
    return 0;
}