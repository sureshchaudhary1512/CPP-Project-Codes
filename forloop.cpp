#include<iostream>
using namespace std;

int main()
{
    int value;
    cout<<"Please Enter value of the table :"<<endl;
    cin>>value;
    cout<<"The Table of :"<<value<<endl;

    for(int i = 1; i<11; ++i)
    {
        cout<<value<<"  x  "<<i<<" = "<<value*i<<endl;
    }

    return 0;
}