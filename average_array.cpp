#include<iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0, num[10], avg; 
    cout<<"Enter number of element : ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        cout<<i<<".  Enter the number =  ";
        cin>>num[i];
        sum += num[i];
    }
    avg = sum/n;
    cout<<"The average of number is : "<<avg<<endl;
    return 0;
}