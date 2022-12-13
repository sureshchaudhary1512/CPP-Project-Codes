#include<iostream>
using namespace std;

inline int factorial(int num)
{
    if(num < 1)
    {
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }
}

int main()
{
    int nums;
    cout<<"Enter a number to find factorial : ";
    cin>>nums;
    cout<<"The factorial of "<<nums<<" : "<<factorial(nums)<<endl;
   
    return 0;
}