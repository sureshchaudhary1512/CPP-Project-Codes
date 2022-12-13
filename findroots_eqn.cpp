#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"Please enter yhe value of a :";
    cin>>a;
    cout<<"Please enter yhe value of b :";
    cin>>b;
    cout<<"Please enter yhe value of c :";
    cin>>c;

    float d = b*b - 4*a*c;

    if (d==0)
    {
        float r1 = (-b/(2*a));
        cout<<"Roots are real and equal "<<r1<<endl;
    }
    else if(d >0)
    {
        float r1 = (-b+sqrt(d)/(2*a)); 
        float r2 = (-b-sqrt(d)/(2*a));
        cout<<"The roots are real and unequal"<<r1<<" "<<r2<<endl;
    }
    else
    {
        cout<<"Imaginary"<<endl;
    }

    return 0;
}
