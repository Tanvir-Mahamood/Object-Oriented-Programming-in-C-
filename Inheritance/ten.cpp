//single level inheritance
#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"Default A constructor\n";
    }
    A(int x)
    {
        cout<<"A constructor "<<x<<endl;
    }
    ~A() {cout<<"Destructor of A\n";}
};

class B:public A
{
public:
    B()
    {
        cout<<"Default B constructor\n";
    }
    B(int x,int y)
    {
        cout<<"B constructor "<<x<<" "<<y<<endl;
    }
    ~B() {cout<<"Destructor of B\n";}
};

int main()
{
    //A a1;
    //A a2(10);
    //B b1;
    B b2(10,20);
    return 0;
}
