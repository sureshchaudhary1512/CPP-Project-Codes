#include<fstream>
#include<iostream>
using namespace std;


int main()
{
    ofstream of("myfile.txt");

    of<<"Suresh Chaudhary"<<endl;
    of<<28<<endl;
    of<<"Master in Computational Mechanics"<<endl;
    of.close();
}