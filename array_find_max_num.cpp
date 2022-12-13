#include<iostream>
using namespace std;

int main()
{
    int A[10] = {63,5,65,89,78,41,87,94,10,100};
    int max = A[0], n = 10;

    for(int i = 0; i < 10; i++)
    {
        if(A[i] > max)
        max = A[i];
        cout<<max<<endl;
    }

    // for(int x : A)
    // {
    //     if(x>max)
    //     max = x;
    //     cout<<max<<endl;
    // } 
    cout<<"The Maximum number in array is = "<<max<<endl;

    return 0;
}