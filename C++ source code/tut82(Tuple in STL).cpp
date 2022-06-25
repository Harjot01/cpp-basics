#include <iostream>
#include <tuple>
using namespace std;

// tuple is also not a container but just like a pair, we can pair two heterogeneous objects, in typle we can pair multiple objects

int main()
{
    tuple<string, int, int, string> t1;
    t1 = make_tuple("Harjot", 18, 12, "D");
    // We can access the value in the placeholders with the help of get method
    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;
    cout << get<2>(t1) << endl;
    cout << get<3>(t1) << endl;

    return 0;
}