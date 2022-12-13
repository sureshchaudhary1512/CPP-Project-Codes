#include<iostream>
using namespace std;

class BasicCar
{
    public:
    virtual void key(){cout<<"Key Open Manually"<<endl;};
    virtual void gear(){cout<<"Manual Transmission"<<endl;};
};

class AdvanceCar: public BasicCar
{
    public:
    void key(){cout<<"Key Open AMT"<<endl;};
    void gear(){cout<<"AMT Transmission"<<endl;};
};

int main()
{
    AdvanceCar acarobj;
    BasicCar *p = &acarobj;

    p->key();
    p->gear();
    
    return 0;
}