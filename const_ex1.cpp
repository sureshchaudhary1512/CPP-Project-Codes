#include<iostream>
using namespace std;

int main()
{

    // CASE 1 - constant integer
    const int x = 10; // int const x = 10;
    // x++; not possible to modify
    cout<<x<<endl;

    // CASE 2 - Pointer to a Integer Constant - 

    int y = 11;
    const int *ptr = &y;  // ptr pointed on y
    // int const *ptr = &y;

    ++y; // this is possible 
    cout<<*ptr<<endl;

    // ++(*ptr);  this is not possible  and error = "read-only variable is not assignable"
    cout<<*ptr<<endl;

    int z = 20;
    ptr = &z;  // this is possible 
    // ++*ptr;  not possible
    cout<<*ptr<<endl; 


    // CASE 3 - Constant Pointer type integer

    int a = 1;

    int * const p = &a;

    cout<<*p<<" "<<a<<endl;

    ++*p; // This is possible
    cout<<*p<<" "<<a<<endl;

    int b = 2;
    // *p = &b; // This is not possible

    cout<<*p<<" "<<b<<endl;


    // CASE 4 - constant pointer to integer constant
    int m = 55;
    const int * const pttr = &m;
    cout<<*pttr<<" "<<m<<endl;
    // ++*pttr; // This is not possible
    // cout<<*pttr<<" "<<m<<endl;
    
    int n = 65;
    // *pttr = &n; // This is not possible

    return 0;
}