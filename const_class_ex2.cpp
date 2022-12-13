#include<iostream>
using namespace std;

class ConstDemo
{
    private:
    int x = 10;
    int y = 15;

    public:

    void display() const  // constant function
    {
        // ++x;  not possible to modify once we define constant
        // ++y;
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    ConstDemo d;
    d.display();

    return 0;
}