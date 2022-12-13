#include<iostream>
using namespace std;

class Base
{
    public:
    void fun_override(){cout<<"Base Class function"<<endl;};
};

class Derived:public Base
{
    public:
    void fun_override(){cout<<"Derived Class function"<<endl;};
};

int main()
{
    Base *p = new Derived();
    p->fun_override();

    return 0;
}