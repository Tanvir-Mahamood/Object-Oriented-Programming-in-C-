/*
Take input of 5 students Roll & CGPA. Then sort them accordingly to their CGPA.
*/

#include<iostream>
using namespace std;

class student
{
private:
    int roll;
    float cgpa;
public:
    student(int a=0,int b=0){}
    void set_roll(int r){roll=r;}
    void set_cgpa(float g){cgpa=g;}

    int get_roll(){return roll;}
    float get_cgpa(){return cgpa;}

    void print(){cout<<"Roll="<<roll<<" and CGPA= "<<cgpa<<endl;}

    student(const student &obj) //copy constructor for swap operation
    {
        roll=obj.roll;
        cgpa=obj.cgpa;
    }
};

int main()
{
    int i,j,R;
    float G;
    student s[5];
    student temp;
    for(i=0;i<5;i++) //Taking Input
    {
        cout<<"Enter roll and cgpa of student["<<i<<"] : ";
        cin>>R>>G;
        s[i].set_roll(R);
        s[i].set_cgpa(G);
    }
    //Descending accoriding to CGPA
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(s[j].get_cgpa()>s[i].get_cgpa()) //need to swap objects
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }

    //Final printing
    for(i=0;i<5;i++)
    {
        s[i].print();
    }
    return 0;
}
