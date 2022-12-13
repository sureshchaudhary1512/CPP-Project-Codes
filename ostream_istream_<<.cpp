#include<iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int img;

    public:
    Complex(int r = 0,int i=0)
    {
        real = r;
        img = i;
    }
    friend istream & operator>>(istream &input, Complex &c)
    {
        input>>c.real>>c.img;
        return input;
    }
    friend ostream & operator<<(ostream &output, Complex &c)
    {
        output<<c.real<<" + i "<<c.img;
        return output;
    }
};

int main()
{
    Complex c1(5,6),c2,c3;
    cout<<"Enter the Complex C2 "<<endl;
    cin>>c2;
    cout<<"Enter the Complex C3 "<<endl;
    cin>>c3;
    cout<<c1<<endl;
    cout<<c2<<endl;
    cout<<c3<<endl;

    return 0;
}