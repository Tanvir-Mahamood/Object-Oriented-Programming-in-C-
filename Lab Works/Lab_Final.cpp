#include <bits/stdc++.h>
using namespace std;
int flag1; //0

class RUET
{
private:
    int no_employee;
    int no_student;
    int no_teacher;
    int emp_ID;
    int stu_ID;
public:
    RUET()
    {
        if(flag1==0)
        {
            cout<<"Number of Employee? :";
            cin>>no_employee;
            cout<<"Number of Student? :";
            cin>>no_student;
            cout<<"Enter Employee ID :";
            cin>>emp_ID;
            cout<<"Enter Student ID :";
            cin>>stu_ID;
            cout<<"Number of Teacher? :";
            cin>>no_teacher;
            flag1=1;
        }
    }
    void display()
    {
        cout<<"Number of Employee = "<<no_employee<<endl;
        cout<<"Number of Student = "<<no_student<<endl;
        cout<<"Number of Teacher = "<<no_teacher<<endl;
        cout<<"Employee ID = "<<emp_ID<<endl;
        cout<<"Student ID = "<<stu_ID<<endl<<endl;
    }
};

class Employee:public RUET
{
public:
    int hours;
    string designation;

    Employee()
    {

    }

    void virtual salary()=0;

};

class Student:public RUET
{
private:
    int no_course;
    string name_course;
    int mark;
public:
    Student()
    {
        cout<<"Number of Course? :";
        cin>>no_course;
        cout<<"Name of Course: ";
        cin>>name_course;
        cout<<"Enter Mark: ";
        cin>>mark;
    }

    void display()
    {
        cout<<"Displaying info of Student\n\n";
        cout<<"Number of Course = "<<no_course<<endl;
        cout<<"Name of Course = "<<name_course<<endl;
        cout<<"Mark = "<<mark<<endl;
    }

    void grade()
    {
        if(mark>=80) cout<<"Grade= A+\n";
        else if(mark>=70) cout<<"Grade= A\n";
        else if(mark>=60) cout<<"Grade= A-\n";
        else if(mark>=50) cout<<"Grade= B\n";
        else if(mark>=40) cout<<"Grade= C\n";
        else cout<<"Fail\n";
        cout<<endl;
    }

};

class Teacher:public Employee
{
private:
    string research;
public:
    Teacher()
    {
        cout<<"Enter the name of Research of your teacher: ";
        cin>>research;
        cout<<"Enter working hours of your teacher: ";
        cin>>hours;
        cout<<"Enter Designation of your teacher: ";
        cin>>designation;
    }

    void display()
    {
        cout<<"Displaying info of Teacher\n\n";
        cout<<"Research Specilization of your teacher= "<<research<<endl;
        cout<<"Working hours of your teacher = "<<hours<<endl;
    }

    void salary()
    {
        cout<<"Salary is= "<<hours*20<<"$\n\n";
    }

};

class Officer:public Employee
{
private:
    int no_officer;
public:
    Officer()
    {
        cout<<"Enter number of Officer: ";
        cin>>no_officer;
        cout<<"Enter working hours of officer: ";
        cin>>hours;
        cout<<"Enter Designation of officer: ";
        cin>>designation;
    }

    void display()
    {
        cout<<"Displaying info of Officer\n\n";
        cout<<"Number of Officer = "<<no_officer<<endl;
        cout<<"Working hours of officer = "<<hours<<endl;

    }
    void salary()
    {
        cout<<"Salary of Officer = "<<hours*10<<"$\n\n";
    }

};

int main()
{
    RUET rrr;
    Teacher t1,t2;
    Officer o1,o2;
    Student s1,s2;

    rrr.display();

    t1.display();
    t1.salary();

    o1.display();
    o1.salary();

    s1.display();
    s1.grade();

    flag1=0;

    t2.display();
    t2.salary();

    o2.display();
    o2.salary();

    s2.display();
    s2.grade();


    return 0;
}
