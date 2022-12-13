#include<iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imaginary;

    public:
    Complex(int r = 0, int c = 0);
    Complex add(Complex c); 
    void display();
    //~Complex();

};

Complex::Complex(int rl,int im)
{
    real = rl;
    imaginary = im;    
}

Complex Complex::add(Complex c)
{
    Complex temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
}

void Complex::display()
{
    cout<<"The Complex number is "<<Complex::real<<" +  i "<<Complex::imaginary<<endl;
}

// Complex::~Complex()
// {
//     cout<<"The Constructor is destroyed"<<endl;
// }

int main()
{
    Complex c1(5,8);
    Complex c2(3,4);
    Complex c3;
    c3 = c1.add(c2);

    c3.display();
    
    return 0;
}