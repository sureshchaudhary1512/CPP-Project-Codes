#include<iostream>
using namespace std;

int main()
{
    int n = 10, sum = 0;
    int A[10] = {5,6,8,79,87,98,74,89,45,63};

    for(int x:A)
    {
        sum += x;
       
    }
    // use : g++ -std=c++11 array_sum.cpp -o array_sum
    // for (int i = 0; i < n; i++)
    // {
    //    sum += A[i]; 
    // }
    cout<<"The sum is = "<<sum<<endl;

    return 0;
}