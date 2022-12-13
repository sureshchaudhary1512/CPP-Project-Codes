#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    Rectangle(int l = 1, int b = 1);
    void setLength(int l) {length = l;}
    void setBreadth(int b) {breadth = b;}
    int getLength() {return length;}
    int getBreadth() {return breadth;}
    void area();
    ~Rectangle();
};

class Cuboid:public Rectangle
{
    private:
    int height;

    public:
    Cuboid(int h)
    {
        height = h;
    }
    void setHeight(int h){height = h;}
    int getHeight() {return height;}
    void volume(){cout<<"Volume : "<<getLength()*getBreadth()*getHeight()<<endl;}
};

Rectangle::Rectangle(int len, int bth)
{
    this->length = len;
    this->breadth = bth;
}

void Rectangle::area()
{
    cout<<"The Area of Rectangle : "<<getLength()*getBreadth()<<endl;
}

Rectangle::~Rectangle()
{
    cout<<"The Constructor Destroyed"<<endl;
}

int main()
{
    Cuboid c(5);
    c.setLength(5);
    c.setBreadth(5);
    c.area();
    c.volume();


    return 0;
}