#include <iostream>
using namespace std;
class operation
{
private:
    int x,y,z,low;
public:
    operation(int a,int b,int c)
    {
        cout<<"Subtraction is: "<<a-b-c<<endl;
    }
    operation(double x)
    {
        if(x>=80) cout<<"Your GPA is 4\nYour grade is A\n";
        else if(x>=70) cout<<"Your GPA is 3\nYour grade is B\n";
        else if(x>=60) cout<<"Your GPA is 2\nYour grade is C\n";
        else if(x>=50) cout<<"Your GPA is 1\nYour grade is D\n";
        else cout<<"You are fail !!!\n";
        cout<<"Your mark: "<<x<<endl<<endl;
    }
    operation()
    {
        cout<<"Enter 3 numbers:";
        cin>>x>>y>>z;
        low=(x<=y)?((x<z)?x:z):((y<z)?y:z);
        cout<<"Lowest number= "<<low<<endl;
    }
    ~operation()
    {
        cout<<"This is destructor.\n\n";
    }
};
int main()
{
    int t,a,b,c;
    double mark;
    while(t != 4)
    {
        cout<<"1. Find the subtraction of three numbers.\n";
        cout<<"2. Find the GPA and Grade.\n";
        cout<<"3. Find minimum among three numbers.\n";
        cout<<"4. Exit.\n";
        cout<<"Enter choice:";
        cin>>t;
        if(t==1)
        {
            cout<<"Enter 3 numbers:";
            cin>>a>>b>>c;
            class operation obj(a,b,c);
        }
        else if(t==2)
        {
            cout<<"Enter mark";
            cin>>mark;
            class operation obj(mark);
        }
        else if(t==3)
        {
            cout<<"Enter 3 numbers:";
            class operation obj;
        }
    }
    return 0;
}
