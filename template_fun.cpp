#include<iostream>
using namespace std;
template<class T> 
// to avoid function overloading we use template function

// T add(T x = 0,T y = 0,T z = 0) // x y z is said default argument even this also works
T add(T x,T y,T z = 0) // z is said default argument
{
    return x+y;
}

int main()
{
    int a = 5,b = 5,c;
    float d = 6.56f,e = 9.895f, g;
    double l = 2.3567, m = 4.6548, n = 6.8974, N;
    c = add(a,b);
    g = add(d,e);
    N = add(l,m,n);

    cout<<"int : "<<c<<" size "<<sizeof(c)<<endl;
    cout<<"float : "<<g<<" size "<<sizeof(g)<<endl;
    cout<<"double : "<<N<<" size "<<sizeof(N)<<endl;

    return 0;
}