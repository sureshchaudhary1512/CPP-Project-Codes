#include<iostream>
//#include<string>
using namespace std;

int main()
{
    string strs = "welcome";
    string::iterator it;
    int count = 0;

    for (it = strs.begin(); it != strs.end(); it++)
    {
        count++;
    }
    cout<<count<<endl;
    
    // int count = 0;
    // char s[] = "welcome";

    // for (int i = 0; s[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // cout<<count<<endl;
    return 0;
}