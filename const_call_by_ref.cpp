#include<iostream>
using namespace std;

void fun(const int &x,const int &y)
{
    cout<<x<<"  "<<y<<endl;    
}

int main()
{
    int a = 10;
    int b = 15;
    fun(a,b);

    cout<<a<<"  "<<b<<endl;   

    return 0;
}