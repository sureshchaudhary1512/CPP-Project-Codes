#include<iostream>
using namespace std;

class Rectangle
{
    private:  // data hiding
    int length, breadth;

    public: // methods kept public

    void setLength(int l)  // property function
    {
        if(l > 0)
        length = l;
        else l = 1;
    }
    void setBreadth(int b)
    {
        if(b > 0)
        breadth = b;
        else b = 1;
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
    Rectangle r1, r2;
    r1.setLength(5);
    r1.setBreadth(10);
    cout<<"Area : "<<r1.area()<<endl;
    cout<<"Perimeter : "<<r1.perimeter()<<endl;

    return 0;
}