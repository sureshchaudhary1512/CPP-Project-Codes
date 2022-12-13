#include<iostream>
using namespace std;

class Student
{
    public:
    int rollno;
    string name;

    
    static int adminNo;

    Student(string n)
    {
        adminNo++;
        rollno = adminNo;
        name = n;
    }

    void display()
    {
        cout<<"The Student Name : " <<name<<endl<<"Roll no : "<<rollno<<endl;
    } 

};
int Student::adminNo = 0;

int main()
{
    Student s1("suresh");
    Student s2("shankar");
    Student s3("saurabh");

    cout<<Student::adminNo<<endl;
    return 0;
}