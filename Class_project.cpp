#include<iostream>
using namespace std;

class Student
{
    private:
    string name;
    int roll_no, marks_physics, marks_chemistry, marks_maths, total_marks;

    public:
    Student(string name, int roll_no);
    void setMarks(int marks_physics, int marks_chemistry, int marks_maths);
    //void getName_roll_number();
    int calculate_total(int marks_physics, int marks_chemistry, int marks_maths);
    char grades(int total_marks);
    ~Student();
};

int main()
{
    string name;
    int roolno, physics, chemistry, maths;
    cout<<"Enter your name : ";
    cin>>name;
    getline(cin,name); // to take more than 1 word
    cout<<"Enter your Roll Number : ";
    cin>>roolno;
    cout<<"Enter your physics mark : ";
    cin>>physics;
    cout<<"Enter your chemistry mark : ";
    cin>>chemistry;
    cout<<"Enter your maths mark : ";
    cin>>maths;
    Student s1(name,roolno);
    s1.setMarks(physics,chemistry,maths);
    int total = s1.calculate_total(physics,chemistry,maths);
    cout<<"Hi !"<<name<<", The total is = "<<total<<endl;
    cout<<"The Grade is : "<<s1.grades(total)<<endl;

    return 0;
}

Student::Student(string names, int roll_nos)
{
    name = names;
    roll_no = roll_nos;
}

void Student::setMarks(int marksphysics, int markschemistry, int marksmaths)
{
    this->marks_physics = marksphysics;
    this->marks_chemistry = markschemistry;
    this->marks_maths = marksmaths;
}

/*void Student::getName_roll_number()
{
    cout<<"Name :"<<name;
}*/

int Student::calculate_total(int marks_physics, int marks_chemistry, int marks_maths)
{
    int total = marks_physics+marks_chemistry+marks_maths;
    return total;
}


char Student::grades(int total_marks)
{
    float average = total_marks/3;

    // Grade A
    if(average > 70)
        return 'A';
    // Grade B
    else if(average >=50 && average <70)
        return 'B';
    // Grade C
    else
        return 'C';
}

Student::~Student()
{
    cout<<"Student class is destroyed"<<endl;   
}