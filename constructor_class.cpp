#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length, breadth, radius;

    public:

    /*  Non-parameterized constructor
    Rectangle()
    {
        length = 1;
        breadth = 1;
    }
    */

    // Parameterized constructor
    Rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }

    // Copy constructor
    Rectangle(Rectangle &rect)
    {
        setLength(rect.length);
        setBreadth(rect.breadth);
    }

    void setLength(int l)
    {
        if(l > 0)
        length = l;
        else length = 1; 
    }

    void setBreadth(int b)
    {
        if(b > 0)
        breadth = b;
        else breadth = 1;
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
    int len, brth;
    cout<<"Enter the vaue of Length = ";
    cin>>len;
    cout<<"Enter the vaue of Breadth = ";
    cin>>brth;
    Rectangle r(len,brth);
    cout<<"Area = "<<r.area()<<endl;
    cout<<"Perimeter = "<<r.perimeter()<<endl;
    cout<<"Address of r : "<<&r<<endl;

    // copy constructor
    Rectangle rcopy(r);
    cout<<"Area = "<<rcopy.area()<<endl;
    cout<<"Perimeter = "<<rcopy.perimeter()<<endl;
    cout<<"Address of rcopy : "<<&rcopy<<endl;

    return 0;
}