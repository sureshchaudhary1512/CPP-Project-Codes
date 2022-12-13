#include<iostream>
using namespace std;

class BasicCar
{
    public:
    void key_manual(){cout<<"Key Open Manually"<<endl;};
    void gear_manual(){cout<<"Manual Transmission"<<endl;};
};

class AdvanceCar: public BasicCar
{
    public:
    void key_amt(){cout<<"Key Open AMT"<<endl;};
    void gear_amt(){cout<<"AMT Transmission"<<endl;};
};

int main()
{
    AdvanceCar acarobj;  // derived class object
    BasicCar *p = &acarobj; // Base class pointer pointing on object of derived class

    // p can only acces to base class methods/functions
    p->gear_manual();
    p->key_manual();

    // p->key_amt();  not access able
    // p->gear_amt(); not access able

    // These things we know already
    // AdvanceCar b;
    // b.gear_manual();
    // b.key_manual();
    // b.key_amt();
    // b.gear_amt();
    
    return 0;
}