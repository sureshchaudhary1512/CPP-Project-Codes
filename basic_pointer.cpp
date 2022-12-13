#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p;  // decelaration
    p = &x;  // initialisation

    cout<<" x  =  "<<x<<endl;
    cout<<" &x =  "<<&x<<endl;
    cout<<" p  =  "<<p<<endl;
    cout<<" &p =  "<<&p<<endl;
    cout<<" *p =  "<<*p<<endl; // dereferenceing

    return 0;
}