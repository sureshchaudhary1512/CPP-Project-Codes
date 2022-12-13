#include<iostream>
using namespace std;

int * return_address()
{
    int *p = new int[5];
    for(int i = 0; i <= 5;++i)
    {
        p[i]=i+1;
    }

    cout<<"p address : "<<p<<endl;
    return p;
}

int main()
{
    int *q = return_address();

    cout<<"q address : "<<q<<endl;

    int A[5];
    for(int i = 0; i <= 5;++i)
    {
        A[i] = q[i];
    }
    
    for(auto x: A)
    {
        cout<<x<<endl;
    }


    return 0;

}