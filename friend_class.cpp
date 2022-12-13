#include<iostream>
using namespace std;
    
class Your;
class My
{
    private:
	int a;
    protected:
	int b;
    public:
	int c;
	friend Your;
};

class Your
{
    public:
	My m;
	void fun()
	{
	    m.a=10;
	    m.b=10;
	    m.c=10;
        cout<<m.a<<" "<<m.b<<" "<<m.c<<endl;
	}
	
};
    
int main()
{

    Your y;
    y.fun();
}
    
    
    

