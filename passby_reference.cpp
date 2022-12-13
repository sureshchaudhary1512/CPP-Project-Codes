#include<iostream>
using namespace std;

// formal parameters are passed by reference. Function can directly access actual parameters.
// reference are are alias of variable

void swap(int &a, int &b) // formal parameters are modified
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<" &a =  "<<&a<<"  &b =  "<<&b<<endl;
    cout<<" a =  "<<a<<"  b =  "<<b<<endl;
}

int main()
{
    int x = 10, y = 20;  // actual parameters
    swap(x, y);
    cout<<" &x =  "<<&x<<"  &y =  "<<&y<<endl;
    cout<<" x =  "<<x<<"  y =  "<<y<<endl;
    return 0;
}