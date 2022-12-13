#include<iostream>
using namespace std;

int fun(int n)
{
    if(n>10)
        return n-5;
    else
        return fun(fun(n+1));
}

int main()
{
    cout<<fun(10);

    return 0;
}