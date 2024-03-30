#include<iostream>
using namespace std;

class Base
{
protected:
    int val;
};

class der1:public Base
{
public:
    der1()
    {
        val=1;
    }

    void get_value()
    {
        cout<<"Der1 value= "<<val<<endl;
    }
};

class der2:public Base
{
public:
    der2()
    {
        val=2;
    }

    void get_value()
    {
        cout<<"Der2 value= "<<val<<endl;
    }
};

class der3:public der1,public der2
{
public:
    //2 copies of val in der3
    void get_value()
    {
        //cout<<"value= "<<val<<endl;
        der1::get_value();
    }
};

int main()
{
    der3 obj;
    obj.get_value();
    return 0;
}
