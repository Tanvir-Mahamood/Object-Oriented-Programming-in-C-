//single level inheritance
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

};

int main()
{
    A a1;
    a1.get(10);
    a1.print();

    B b1;
    b1.get(20);
    b1.print();
    return 0;
}

