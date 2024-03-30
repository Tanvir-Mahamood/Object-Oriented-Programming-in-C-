//hierarchical inheritance
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


class C:public A
{
public:
    C()
    {
        cout<<"Default C constructor\n";
    }
    C(int x,int y,int z)
    {
        cout<<"C constructor "<<x<<" "<<y<<" "<<z<<endl;
    }
    ~C() {cout<<"Destructor of C\n";}
};

int main()
{
    //A a1;
    //A a2(10);
    //B b1;
    //B b2(10,20);
    //C c1;
    C c2(10,20,30);
    return 0;
}



