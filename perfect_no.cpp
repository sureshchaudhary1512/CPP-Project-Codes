#include<iostream>
using namespace std;

int main()
{           
    int n, sum = 0;
    cout<<"Enter a number to find Prefect Number : ";
    cin>>n;

    for (int i = 1; i<=n ; i++) 
    {
        if(n%i==0)
        {
            sum += i;
        }
    }
    cout<<"The sum of number is = "<<sum<<endl;
    if (2*n == sum)
    {
        cout<<"The number u entered is PERFECT"<<endl;
    }
    else
    {
        cout<<"The number u entered is NOT PERFECT"<<endl;
    }

    return 0;
}