#include<iostream>
using namespace std;



int & return_ref(int &a)
{
    cout<<"a : "<<a<<endl;
    
    return a;
}

int main()
{
    int x = 10;
    int y = return_ref(x);

    cout<<"y : "<<y<<endl;

    return_ref(x) = 25;
    cout<<x<<endl;

    return 0;
}