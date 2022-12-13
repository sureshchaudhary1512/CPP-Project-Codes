#include<iostream>
using namespace std;
    
class Car // Abstract class
{
    public:
	virtual void start() = 0; // pure virtual functions
};
    
class Innova:public Car
{
    public:
	void start()
	{
		cout<<"Innova Started"<<endl;
	}
};
    
class Swift:public Car
{
    public:
	void start()
    {
		cout<<"Swift Started"<<endl;
	}
};
    
int main()
{
	Car *ptr=new Innova();
	ptr->start();
	ptr=new Swift();
	ptr->start();
	
    return 0;
}
    