// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class beta
{
private:
    float p, q;

public:
    beta(float a, float b) : p(a), q(b + p) // initialized using initializer list
    {
        cout << "beta constructed" << endl;
    }

    void show_beta(void)
    {
        cout << "p = " << p << endl;
        cout << "q = " << q << endl;
    }
};

int main()
{
    beta b(1.1, 2.2);
    b.show_beta();
    return 0;
}