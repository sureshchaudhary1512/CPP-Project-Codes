#include<iostream>
using namespace std;

int main()
{
    int m, n;
    cout<<"Enter a two number to find GCD : "<<endl;
    cin>>m;
    cin>>n;

    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else
        {
            n = n - m;
        }
    }
    cout<<"The GCD of 2 number you entered is : "<<m<<endl;
    //cout<<"The GCD of 2 number you entered is : "<<n<<endl;

    return 0;
}