//Hybrid inheritance
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

class B:virtual public A
{

};

class C:virtual public A
{

};
class D:public B,public C
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
    D d1;
    d1.get(99);

    //printing x in Class A,B,C by function calling
    a1.print();
    b1.print();
    c1.print();
    d1.print();


    return 0;
}




