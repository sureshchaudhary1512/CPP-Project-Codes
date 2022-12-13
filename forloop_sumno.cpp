#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout<<"Enter the Number to count natural number = ";
    cin>>n;

    for (int i = 0; i <= n; ++i)
    {
        sum += i;
    }
    cout<<"The sum of natural number :"<<sum<<endl;

    return 0;

}