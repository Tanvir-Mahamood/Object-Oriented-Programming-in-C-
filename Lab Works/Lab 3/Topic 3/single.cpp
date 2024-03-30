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
    int sum()
    {
        int s=bx+get_ax();
        return s;
    }

    ~B() {cout<<"Destructor in class B\n";}
};

int main()
{
    B b1;

    cout<<b1.sum()<<endl;
    return 0;
}

