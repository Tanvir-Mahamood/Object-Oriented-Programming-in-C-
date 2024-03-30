#include <iostream>
using namespace std;

class A
{
public:
    virtual void print()=0;
};
class B:public A
{
public:
    void print()
    {
        cout<<"Inside print() of class B"<<endl;
    }
};

int main()
{
    //A a;
    //a.print();

    B b;
    b.print();

    //A *p;
    //p=&a;
    //p->print();

    A *p;
    p=&b;
    p->print();
    return 0;
}





