#include <iostream>
using namespace std;

class A
{
private:
    int ax;
public:
    A()
    {
        cout<<"Enter AX=";
        cin>>ax;
    }
    int get_ax(){return ax;}
    ~A() {cout<<"Destructor in class A\n";}
};

class B:public A
{
private:
    int bx;
public:
    B()
    {
        cout<<"Enter BX=";
        cin>>bx;
    }
    int get_bx(){return bx;}
    ~B() {cout<<"Destructor in class B\n";}
};

class C:public B
{
private:
    int cx;
public:
    C()
    {
        cout<<"Enter CX=";
        cin>>cx;
    }
    int sum()
    {
        int s=get_ax()+get_bx()+cx;
        return s;
    }

    ~C() {cout<<"Destructor in class C\n";}
};


int main()
{
    C c1;

    cout<<c1.sum()<<endl;
    return 0;
}



