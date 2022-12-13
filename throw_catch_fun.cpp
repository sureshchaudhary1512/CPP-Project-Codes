#include<iostream>
using namespace std;

int division(int x,int y)throw(string)
{
    if(y == 0)
        throw string("ERROR ! ");
    return x/y;
}

int main()
{
    int a, b;
    cout<<"Enter a value of a = ";
    cin>>a;
    cout<<"Enter a value of b = ";
    cin>>b;

    try
    {
        float c = division(a,b);
        cout<<c<<endl;
    }

    catch(string err)
    {
        cout<<"Division Error : "<<err<<endl;
    }

    return 0;
}