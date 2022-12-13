#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number to get in reverse = ";
    cin>>n;

    while(n>0)
    {
        int r = n%10;
        n = n/10;
        cout<<r<<endl;
    }

    return 0;
}