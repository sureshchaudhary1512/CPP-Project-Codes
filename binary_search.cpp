#include<iostream>
using namespace std;

int main()
{
    int n = 10, key, A[10];
    int lower = A[0], mid = A[5], higher = A[9];
    cout<<"Enter all number : "<<endl;
    
    for(int i = 0; i<n; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter value of key =  ";
    cin>>key;

    while(lower <= higher)
    {   
        mid = (lower + higher)/2;
        if(key == A[mid])
        {
            cout<<"The key is found at :  "<<mid<<endl;
            return 0;
        }
        else if (key <= A[mid])
        {
            higher = mid -lower;
        }
        else 
        {
            lower = mid + lower; 
        }
    }
    cout<<"key NOT FOUND"<<endl;

    return 0;
}