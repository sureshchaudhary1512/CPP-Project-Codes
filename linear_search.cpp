#include<iostream>
using namespace std;

int main()
{
    int n = 5, key, A[5];
    cout<<"Enter all number : "<<endl;
    
    for(int i = 0; i<n; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter a value need to check inside array = ";
    cin>>key;

    for(int i = 0; i<n; i++)
    {
        if(key == A[i])
        {
            cout<<"The key is found successfully at index  :  "<<i<<endl;
            return 0;
        }
    }
    cout<<"The key is not found"<<endl;
    return 0;
}