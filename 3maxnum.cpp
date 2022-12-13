#include<iostream>
using namespace std;

int main()
{
    int x,y,z;
    cout<<"Please enter 1st number : ";
    cin>>x;
    cout<<"Please enter 2nd number : ";
    cin>>y;
    cout<<"Please enter 3rd number : ";
    cin>>z;

    if (x > y && x > z)
        cout<<"The larger number is :"<<x<<endl;
    else if (y > z)
        cout<<"The larger number is :"<<y<<endl;
    else
        cout<<"The larger number is :"<<z<<endl;
    
    return 0;
}