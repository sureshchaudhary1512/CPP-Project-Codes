#include<iostream>
using namespace std;

class Rectangle
{
    public:
    int length, breadth;

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle r;
    Rectangle *stack_ptr;  
    stack_ptr = &r;  // stack_ptr pointing to r 
    stack_ptr->length = 20;    //r.length = 10;
    stack_ptr->breadth = 30;   //r.breadth = 15;
    cout<<stack_ptr->area()<<endl; // cout<<r.area()<<endl;


    // data is stored in Heap memory
    Rectangle *heap_ptr = new Rectangle();  
    heap_ptr->length = 10;
    heap_ptr->breadth = 15;
    cout<<heap_ptr->area()<<endl;

    delete heap_ptr;
    heap_ptr = nullptr;

    return 0;
}