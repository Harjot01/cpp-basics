#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float>

float funcAverage(int a, int b){
    float avg= (a+b)/2.0; 
    return avg;
}

int main(){
    float a;
    a = funcAverage(5,2);
    printf("The average of these numbers is %f",a);
    return 0;
}

// declaring template to swap two numbers

template <class T>
void swapp(T &a, T &b)
{   
    //swapping algorithm
    T temp;
    temp = a;
    a = b;
    b = temp;

    cout<<"x = "<<a<<endl; 
    cout<<"y = "<<b<<endl; 
}

int main(){
    int x, y;
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;
    swapp(x, y);

    return 0;
}