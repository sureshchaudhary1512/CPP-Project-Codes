#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

// call by value - input = object of structure
int area(struct Rectangle r1)
{
    return r1.breadth*r1.breadth;
}

// call by reference
int arearef(struct Rectangle &r2)
{
    r2.breadth++;
    r2.breadth++;
    return r2.length*r2.breadth;
}


// call by address 
int areaadd(struct Rectangle *r3, int l, int b)
{
    r3->length = l;
    r3->breadth = b;

    return r3->length*r3->breadth;
}

int main()
{
    struct Rectangle r = {10,5};
    cout<<"area = "<<area(r)<<endl;
    
    struct Rectangle r1 = {10,10};
    cout<<"area_ref = "<<arearef(r1)<<endl;

    struct Rectangle r2 = {6,6};
    cout<<"area_add = "<<areaadd(&r2,6,6)<<endl;

    return 0;
}