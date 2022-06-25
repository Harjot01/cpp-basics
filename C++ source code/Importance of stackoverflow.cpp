#include <iostream>
using namespace std;

class Interview
{
private:
    bool stackoverflow;

public:
    bool Condition_For_Hiring()
    {
        cout << "Do you use stackoverflow?" << endl;
        cin >> stackoverflow;
        if (stackoverflow)
        {
            cout << "Congratulations as you know how to use stackoverflow you are hired, let's discuss the salary." << endl;
        }
        else
        {
            cout << "As you don't know how to use stackoverflow, so you are fired." << endl;
        }
    }
};

int main()
{
    Interview interviewee;
    interviewee.Condition_For_Hiring();
    return 0;
}