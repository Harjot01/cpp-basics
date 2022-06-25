// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

/*
-> An inline function is a function that is expanded in line where it is invoked i.e. the compiler replaces the function call with the corresponding function code.
 
-> As in a normal function there is an overhead of flow control from the main() to the function and then back from function to main() this increases the execution time so to overcome it we use inline function

-> When the function grows in size then in that case inline function should not be used, as at some point the overhead of the function call becomes small compared to the execution of the function. So in such cases we should use normal function

-> Remember that the inline keyword merely sends a request, not a command, to the compiler. The compiler may ignore this request if the function defination is too long or too complicated then the compiler will compiler the inline function as a normal function


-> Some of the expansions where inline function may not work are :- 
1. The function returning values, if a loop, a switch, or a goto exists.
2. For function not returning values, if a return statement exists.
3. If function contains static variables.
4. If inline functions are recursive.
*/

inline float mul(float x, float y)
{
    return(x * y);
}

int main()
{
    float h = 12.345;
    float a = 9.82;
    cout<<mul(h, a);
    return 0;
}

