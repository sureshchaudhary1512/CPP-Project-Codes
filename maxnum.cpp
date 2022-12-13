#include<iostream>
using namespace std;

int main()
{

    int x,y;
    cout<<"The comparison of 2 numbers"<<endl;
    cout<<"Enter the 1st number : "<<endl;
    cin>>x;
    cout<<"Enter the 2nd number : "<<endl;
    cin>>y;

    if(x > y)
        cout<<"The value of maximum number is :"<<x<<endl;
    else
        cout<<"The value of maximum number is :"<<y<<endl;
    
    // if(x > y)
    // {
    //     cout<<"The value of maximum number is :"<<x<<endl;
    // }
    // else
    // {
    //     cout<<"The value of maximum number is :"<<y<<endl;
    // }

    return 0;
}