#include<iostream>
using namespace std;

class A
{
public:
    void printMessge()
    {
        cout<<"Class A print message function.\n";
    }
};

class B
{
public:
    void printMessge()
    {
        cout<<"Class B print message function.\n";
    }
};

class AB:public A,public B
{
public:
    void printMessge()
    {
        A::printMessge();
        B::printMessge();
        cout<<"Ambiguity was not found due to scope resolution.\n";
    }
};

int main()
{
    AB obj;
    obj.printMessge();
    return 0;
}
