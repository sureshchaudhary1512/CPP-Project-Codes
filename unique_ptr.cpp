#include<iostream>
using namespace std;

class Rectangle
{
    public:
    int length, breadth;

    Rectangle(int l = 1, int b = 1)
    {
        length = l;
        breadth = b;
    }

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
    Rectangle rect1; // class can be user defined datatype
    cout<<"The Area of Rectangle : "<<rect1.area()<<endl;
    cout<<"The Perimeter of rectangle : "<<rect1.perimeter()<<endl;


    // --------------------unique_ptr----------------------------
    unique_ptr<Rectangle> ptr(new Rectangle(10,10));
    cout<<"The Area of Rectangle : "<<ptr->area()<<endl;
    cout<<"The Perimeter of rectangle : "<<ptr->perimeter()<<endl;

    // ----------------------shared_ptr---------------------------

    shared_ptr<Rectangle> shrdptr1(new Rectangle(5,5));
    cout<<"The Area of Rectangle : "<<shrdptr1->area()<<endl;
    cout<<"The Perimeter of rectangle : "<<shrdptr1->perimeter()<<endl;

    shared_ptr<Rectangle> shrdptr2;
    shrdptr2 = shrdptr1;
    cout<<"Two pointer sharing to same object "<<endl;
    cout<<"Ptr1 area : "<<shrdptr1->area()<<endl;
    cout<<"Ptr2 area : "<<shrdptr2->area()<<endl;
    cout<<"ref_counter = "<<shrdptr1.use_count()<<endl;

    return 0;
}