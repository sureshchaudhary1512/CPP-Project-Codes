#include<iostream>
using namespace std;

// Pass-By-Value : values of Actual parameters are passed to formal parameters. 
// Actual parameters cannot be modified by function

void swap(int a, int b) // formal parameters are modified
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<" a =  "<<a<<"  b =  "<<b<<endl;
}

int main()
{
    int x = 10, y = 20;  // actual parameters
    swap(x,y);
    cout<<" x =  "<<x<<"  y =  "<<y<<endl;
    return 0;
}