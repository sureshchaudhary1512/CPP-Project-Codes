#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    cout<<"Enter u r name : ";
    cin>>name;
    getline(cin,name);
    cout<<name.length()<<endl;
    cout<<name.size()<<endl;
    cout<<name.capacity()<<endl;
    cout<<name.empty()<<endl;
    cout<<name.length()<<endl;
    
    return 0;
}