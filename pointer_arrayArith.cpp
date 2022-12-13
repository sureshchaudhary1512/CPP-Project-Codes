#include<iostream>
using namespace std;

int main()
{
    int A[5] = {1,2,3,4,5};
    int *p = A;  // this will take base value of A....A[0] 
    int *q = &A[4]; 

    cout<<*q<<endl;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p += 2;
    cout<<*p<<endl;

    return 0;
}