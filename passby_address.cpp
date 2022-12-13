#include<iostream>
using namespace std;

// Address of Actual Parameters are passed to a function
// formal parameters must be pointers. Function can indirectly access actual parameters.

void swap(int *a, int *b) // formal parameters are modified
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    ++*a;
    ++*b;
    cout<<" a =  "<<a<<"  b =  "<<b<<endl;
    cout<<" a =  "<<*a<<"  b =  "<<*b<<endl;
}

int main()
{
    int x = 10, y = 20;  // actual parameters
    swap(&x, &y);
    cout<<" &x =  "<<&x<<"  &y =  "<<&y<<endl;
    cout<<" x =  "<<x<<"  y =  "<<y<<endl;
    return 0;
}