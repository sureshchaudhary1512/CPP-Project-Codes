#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(i > j)
            {
                cout<<"";
            }
            else
            {
                cout<<"*  ";
            }
        }
        cout<<endl;
    }


    // for(int i = 0 ; i <10; i++)
    // {
    //     for(int j = 0; j < 11; j++)
    //     {
    //         cout<<" ( "<<i<<" , "<<j<<" ) ";
    //     }
    
    // cout<<endl;
    // }


    return 0;
}