#include<iostream>
using namespace std;

int main()
{
    float x,y;
    int choice;
    cout<<"The operations will be performed on basis of your choice"<<endl;
    cout<<"1. Addition " <<"2. Subtraction " <<"3. Multiplication " <<"4. Division"<<endl;
    cout<<"Please enter a 2 number :"<<endl;
    cin>>x>>y;

    cout<<"select your choice shown above "<<endl;
    cin>>choice;
    cout<<"The result is : ";

    switch (choice)
    {
    case 1: cout<<(x+y)<<endl;
        break;
    case 2: cout<<(x-y)<<endl;
        break;
    case 3: cout<<(x*y)<<endl;
        break;
    case 4: cout<<(x/y)<<endl;
        break;
    default: cout<<"None choice"<<endl;
        break;
    }

    return 0;

}