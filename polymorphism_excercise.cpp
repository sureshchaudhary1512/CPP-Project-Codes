#include<iostream>
using namespace std;

class Shapes  // Abstract class
{
    public:
    virtual void area() = 0;  // pure virtual functions
    virtual void perimeter() = 0; // pure virtual functions
};

class Rectangle:public Shapes
{
    private:
    int length;
    int breadth;

    public:
    Rectangle(int l, int b) {length = l; breadth = b;};
    void area() {cout<<"The Area of Rectangle : "<<length*breadth<<endl;};
    void perimeter() {cout<<"The Perimeter of Rectangle : "<<2*(length+breadth)<<endl;};
};

class Circle:public Shapes
{
    private:
    int radius;

    public:
    Circle(int r) {radius = r;};
    void area() {cout<<"The Area of Circle : "<<3.14*radius*radius<<endl;};
    void perimeter() {cout<<"The Perimeter of Circle : "<<2*3.14*radius<<endl;};
};

int main()
{
    // Rectangle rect(10,10);
    // rect.area();
    // rect.perimeter();

    // Circle cir(5);
    // cir.area();
    // cir.perimeter();

    Shapes *ptr = new Rectangle(10,20);
    ptr->area();
    ptr->perimeter();

    ptr = new Circle(10);
    ptr->area();
    ptr->perimeter();

    return 0;
}