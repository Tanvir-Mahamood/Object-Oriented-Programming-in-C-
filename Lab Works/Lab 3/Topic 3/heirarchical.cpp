#include <iostream>
using namespace std;
int flag;

class A
{
private:
    //static int ax;
    int ax;
public:
    A()
    {
        if(flag==0)
        {
            cout<<"Enter AX=";
            cin>>ax;
            flag=1;
        }
    }
    int get_ax(){return ax;}
    ~A() {cout<<"Destructor in class A\n";}
};

class B:public A
{
private:
    int bx,res;
public:
    B()
    {
        cout<<"Enter BX=";
        cin>>bx;
    }

    int sum(int cc)
    {
        res=get_ax()+bx+cc;
        return res;
    }

    ~B() {cout<<"Destructor in class B\n";}
};

class C:public A
{
private:
    int cx;
public:
    C()
    {
        cout<<"Enter CX=";
        cin>>cx;
    }
    int get_cx(){return cx;}
    ~C() {cout<<"Destructor in class C\n";}
};

//int A::ax;

int main()
{
    B b1;
    C c1;
    cout<<b1.sum(c1.get_cx())<<endl;
    return 0;
}





