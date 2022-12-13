#include<iostream>
using namespace std;

// refernce = alias;

int main()
{
    int x = 10;
    int &y = x;  // y is refernce to x

    cout<<" x : "<<x<<endl;
    cout<<" y : "<<y<<endl;
    cout<<" "<<endl;
    cout<<" lets see the address of x & y "<<endl;
    cout<<" the address of x : "<<&x<<endl;
    cout<<" the address of y : "<<&y<<endl;

    x++;
    cout<<" x : "<<x<<endl;
    cout<<" y : "<<y<<endl;
    cout<<" "<<endl;

    y++;
    cout<<" x : "<<x<<endl;
    cout<<" y : "<<y<<endl;

    return 0;
}

