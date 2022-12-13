#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter a value of a = ";
    cin>>a;
    cout<<"Enter a value of b = ";
    cin>>b;

    try
    {
        if(b==0)
            throw 1;
        float c = a/b;
        cout<<"c : "<<c<<endl;
    }
    catch(int i)
    {
        cout<<"Division error "<<endl;
    }
    


    return 0;
}