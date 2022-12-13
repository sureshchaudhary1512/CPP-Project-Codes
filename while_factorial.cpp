#include<iostream>
using namespace std;

int main()
{
    int n, i =1, fact = 1;
    cout<<"Find factorial of number :";
    cin>>n;

    // for(int i = 1; i<=n; i++)
    // {
    //     fact *= i;
    // }

    // while(i<=n)
    // {
    //     fact = fact*i;
    //     i++;
    // }

    // do
    // {
    //     fact *= i;
    //     i++;
    // } while (i<=n);

    cout<<"Fctorial of "<<n<<" =  "<<fact<<endl;

    return 0;
}