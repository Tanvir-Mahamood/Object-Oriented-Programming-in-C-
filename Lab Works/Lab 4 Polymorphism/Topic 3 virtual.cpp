#include <iostream>
using namespace std;

class A
{
public:
    virtual void print()
    {
        cout<<"Inside Print() of class A"<<endl;
    }
};
class B:public A
{
public:
    void print()
    {
        cout<<"Inside Print() of class B"<<endl;
    }
};

int main()
{
    cout<<"With virtual function:\n\n";

    cout<<"i) ";
    A a;
    a.print();

    cout<<"ii) ";
    B b;
    b.print();

    cout<<"iii) ";
    A *p;
    p=&a;
    p->print();

    cout<<"iv) ";
    p=&b;
    p->print();

    return 0;
}


