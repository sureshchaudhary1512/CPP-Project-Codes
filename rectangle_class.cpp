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
    Rectangle rect1, rect2; // class can be user defined datatype
    rect1.length = 10;
    rect1.breadth = 10;
    cout<<"The Area of Rectangle : "<<rect1.area()<<endl;
    cout<<"The Perimeter of rectangle : "<<rect1.perimeter()<<endl;

    return 0;
}