#include<iostream>
using namespace std;

//g++ -std=c++11 matrixADD.cpp -o matrixADD

int main()
{
    int A[3][3] = {1,2,3,4,5,6,7,8,9};
    int B[3][3] = {1,2,3,4,5,6,7,8,9};
    int C[3][3];

    // atleast 1-one {auto&} required - A is 2 dimension array so x willbe stored one by one ROW
    //x will be taking a row at a time.  y is an element in a row x.
    //we can’t define a row so we declare auto.
    for (auto& x: A) 
    {
        for (auto& y:x)  // (int y:x) can written not mandatory to write here auto&
        {
            cout<<y<<"  ";
        }
        cout<<endl;
    }

    return 0;
}