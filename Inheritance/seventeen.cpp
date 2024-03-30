//multi level inheritance
#include <iostream>
using namespace std;

class A
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

class B:public A
{
    public:
    void printSQ()
    {
        cout<<x*x<<endl;
    }
};

class C:public B
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

    //printing x in Class A,B,C by function calling
    a1.print();
    b1.print();
    c1.print();
    cout<<endl;
    b1.printSQ();
    c1.printSQ();
    return 0;
}



