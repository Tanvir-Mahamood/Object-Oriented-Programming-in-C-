#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void show()
    {
        cout<<"Base class Show function is called.\n";
    }
    virtual void print()
    {
        cout<<"Base class Print function is called.\n";
    }
};

class Derived:public Base
{
    public:
    void show()
    {
        cout<<"Derived class Show function is called.\n";
    }
    void print()
    {
        cout<<"Derived class Print function is called.\n";
    }
};

int main()
{
    Base *base_ptr;       //Base class pointer
    Derived derived_obj;  //Derived class object

    base_ptr=&derived_obj;

    base_ptr->show();
    base_ptr->print();


    return 0;
}
