#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout<<"From A\n";
    }
};

class B:public virtual A
{
public:
    /*void show()
    {
        cout<<"From B, derived from A\n";
    }*/
};

class C:public virtual A
{
public:
    /*void show()
    {
        cout<<"From C, derived from A\n";
    }*/
};

class D:public B,public C
{
public:
    /*void show()
    {
        cout<<"From D, derived from B and C\n";
    }*/
};

int main()
{
    A a1;
    B b1;
    C c1;
    D d1;

    //a1.show();
    //b1.show();
    //c1.show();
    d1.show();
    return 0;
}
