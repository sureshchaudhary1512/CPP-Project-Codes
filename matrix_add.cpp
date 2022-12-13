#include<iostream>
using namespace std;

int main()
{
    int A[3][3] = {1,2,3,4,5,6,7,8,9};
    int B[3][3] = {1,2,3,4,5,6,7,8,9};
    int C[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for(int m = 0; m < 3; m++)
    {
        for(int n = 0; n < 3; n++)
        {
            cout<<C[m][n]<<"   ";
        }
        cout<<endl;
    }

    return 0;
}