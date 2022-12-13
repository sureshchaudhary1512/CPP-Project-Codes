#include<iostream>
using namespace std;

class Test
{
    private:
    int a;
    int b;

    public:
    static int count;  // static member - it will occupy memory once and will be shared no of object 
    Test()              // static member belongs to class not object
    {
        a = 10;
        b = 10;
        count++; 
    }

    static int getCount()
    {
        // static member fun can access only static variable
        return count;
    }
};

int Test::count = 0; // static member must be declare outside the class with scpe resolution

int main()
{
    cout<<Test::getCount()<<endl;
    Test t1;
    cout<<t1.getCount()<<endl;
    Test t2;
    cout<<t2.getCount()<<endl;

    return 0;
}