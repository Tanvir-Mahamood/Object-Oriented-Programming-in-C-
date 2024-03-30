#include <iostream>
using namespace std;
int flag; //0

class A
{
private:
    static int ax;
public:
    A()
    {
        if(flag==0)
        {
            int a;
            cout<<"Enter AX=";
            cin>>a;
            ax=a;
            flag=1;
        }
    }
    int get_ax(){return ax;}
    ~A() {cout<<"Destructor in class A\n";}
};

class B:virtual public A
{
private:
    int bx;
public:
    B()
    {
        int b;
        cout<<"Enter BX=";
        cin>>b;
        bx=b;
    }
    int get_bx(){return bx;}
    ~B() {cout<<"Destructor in class B\n";}
};

class C:virtual public A
{
private:
    int cx;
public:
    C()
    {
        int c;
        cout<<"Enter CX=";
        cin>>c;
        cx=c;
    }
    int get_cx(){return cx;}
    ~C() {cout<<"Destructor in class C\n";}
};

class D:public B,public C
{
private:
    int dx;
public:
    int s;
    D()
    {
        int d;
        cout<<"Enter DX=";
        cin>>d;
        dx=d;
    }
    int sum()
    {
        s=get_ax()+get_bx()+get_cx()+dx;
        return s;
    }
    ~D() {cout<<"Destructor in class D\n";}
};

int A::ax;

int main()
{

    D d1;

    cout<<d1.sum()<<endl;
    return 0;
}




