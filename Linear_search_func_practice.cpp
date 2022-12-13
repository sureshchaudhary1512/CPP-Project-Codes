#include<iostream>
using namespace std;

int linear_search(int A[], int nums, int search_key)
{
    for(int i = 0; i < nums; i++)
    {
        if(A[i]==search_key)
        return i;
    }
    return 0;
}

int main()
{
    int num, A[10], search_num;
    cout<<"Enter a size of 1D array = ";
    cin>>num;
    cout<<"Enter the "<<num<<" number in array "<<endl;
    for(int i = 0; i < num; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the number to search in array : ";
    cin>>search_num;
    int indexs = linear_search(A, num, search_num);
    cout<<"The number "<<search_num<<" found in arrat at index "<<indexs<<endl;

    return 0;
}