#include<iostream>
using namespace std;

// Recursive Factorial 
int factRec(int n)
{
    if(n==0)
        return 1;
    else if (n < 0)
        return 1;
    else
        return factRec(n-1)*n;
}

// Loop factorial
int factLoop(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *=i;
    }
    return fact;
}

int main()
{
    cout<<"Recursive factorial : "<<factRec(5)<<endl;
    cout<<"Loop Factorial : "<<factLoop(5)<<endl;

    return 0;
}

