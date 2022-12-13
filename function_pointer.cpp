#include<iostream>
using namespace std;

void max(int x, int y)
{
    int z = x>y?x:y;
    cout<<"Max number is  = "<<z<<endl;
}

void min(int x, int y)
{
    int z = x<y?x:y;
    cout<<"Min number is  = "<<z<<endl;
}

int main()
{
    int x, y;
    void (*fp)(int,int);    // return_type (*fp) (data_type_of_parameters)
    fp = max;
    cout<<"Enter 2 number to compare : ";
    cin>>x>>y;
    (*fp) (x,y);

    fp = min;
    (*fp) (x,y);

    return 0;
}