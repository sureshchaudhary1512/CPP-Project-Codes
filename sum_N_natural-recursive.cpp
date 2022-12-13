#include<iostream>
using namespace std;

// Sum of Natural Numbers reccursive fun()
int sumRec(int n)
{
    if(n==0)
        return 0;
    else
        return sumRec(n-1) + n;
}

// For Loop for Sum n natural Numbers
int sumLoop(int n)
{
    int sum = 0;
    for(int i = 1; i<=n; ++i)
    {
        sum +=i;
    }
    return sum;
}

int sumFormula(int n)
{
    int formula = n*(n+1)/2;
    return formula;
}

int main()
{
    cout<<"For loop : "<<sumLoop(5)<<endl;
    cout<<"Formula : "<<sumFormula(5)<<endl;
    cout<<"Recursive Loop : "<<sumRec(5)<<endl;

    return 0;
}