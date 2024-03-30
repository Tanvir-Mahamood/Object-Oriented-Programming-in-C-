//multiple inheritance
#include <iostream>
using namespace std;

class  A
{
public:
    int x;
    void get(int a)
    {
        x=a;
    }
    void print()
    {
        cout<<"In class A "<<x<<endl;
    }
};

class B
{
public:
    int y;
    void get(int a)
    {
        y=a;
    }
    void print()
    {
        cout<<"In class B "<<y<<endl;
    }
};

class C:virtual public A,virtual public B
{

};

int main()
{
    A a1;
    a1.get(10);

    B b1;
    b1.get(100);

    C c1;
    c1.get(1000);
    c1.print();
    return 0;
}


