#include<iostream>
using namespace std;

void recFun(int n)
{
    if (n>0)
    {
        cout<<n<<" ";
        recFun(n-1);
        recFun(n-1);
    }  
}

int main()
{
    int x = 3;
    recFun(x);

    return 0;
}