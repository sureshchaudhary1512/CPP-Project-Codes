#include<iostream>
using namespace std;

int main()
{   
    int n, m, sum = 0;
    cout<<"Ente a Number to check Armstrong number = ";
    cin>>n;
    m = n; // value of n will become 0 at the end of loop. we need the value of n to compare it with the sum. 
    // so we keep the value of n in another variable m.

    while(n>0)
    {
        int r = n%10;
        n = n/10;
        sum += r*r*r;
    }
    if (m == sum) 
    {
        cout<<"IT'S ARMSTRONG NUMBER "<<endl;
    }
    else
    {
        cout<<"IT'S NOT ARMSTRONG NUMBER"<<endl;
    }

    return 0;
}