#include<iostream>
using namespace std;

// Normal Power Function 
int pow(int m,int n)
{
    if(n==0)
        return 1;
    else
        return pow(m,n-1)*m;
}

// Optimized Power Function
int oprtimizePow(int p,int q)
{
    if(q==0)
        return 1;
    else if (q%2 ==0)
        return oprtimizePow(p*p,q/2);
    else
        return oprtimizePow(p*p,(q-1)/2)*p;
}

int main()
{
    int m = 2;
    int n = 9;
    float k = n/m;
    float l = n%m;
    // cout<<"The Pow("<<m<<","<<n<<") : "<<pow(m,n)<<endl;
    cout<<"The OptimizedPow("<<m<<","<<n<<") : "<<oprtimizePow(2,9)<<endl;
    cout<<"Divide : "<<n/m<<endl;
    cout<<"Reminder : "<<n%m<<endl;
    cout<<"K = "<<k<<endl;
    cout<<"L = "<<l<<endl;

    return 0;
}