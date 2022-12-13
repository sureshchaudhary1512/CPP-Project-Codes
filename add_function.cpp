#include<iostream>
using namespace std;

int add(int x, int y)
{
    int z = x + y;
    return z;
}

int main()
{
    int a, b, c;
    cout<<"Please enter two number to add : ";
    cin>>a>>b;

    c = add(a, b);
    cout<<"the addition of two number is = "<<c<<endl;
    return 0;
}