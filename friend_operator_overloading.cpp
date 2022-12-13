#include<iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imaginary;

    public:
    Complex(int r = 0, int c = 0);
    friend Complex operator+(Complex c1, Complex c2); 
    void display();
    //~Complex();

};

Complex::Complex(int rl,int im)
{
    real = rl;
    imaginary = im;    
}

Complex operator+(Complex c1, Complex c2) // no need to give scope resolution
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
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
    Complex c2(5,4);
    Complex c3;
    //c3 = c1 + c2;
    c3 = operator+(c1,c2);

    c3.display();
    
    return 0;
}