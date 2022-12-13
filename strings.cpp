#include<iostream>

using namespace std;


int main()
{
    char name[20], profession[20];
    char s[] = "Hello everyone ";
    char s1[] = "this is ";
    cout<<s<<endl;

    cout<<"Enter your name : ";
    cin.get(name, 20);
    cin.ignore();
    cout<<"Profession : ";
    cin.get(profession,20);

    cout<<"length of string : "<<strlen(name)<<endl;
    //cout<<strcat(s,s1)<<""<<endl;
    cout<<strcat(name, profession)<<endl;
    return 0;
}