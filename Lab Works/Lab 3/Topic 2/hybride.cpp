#include <iostream>
using namespace std;

class A
{
private:
    int x=10;
protected:
    int y=100;
public:
    int z=1000;

    int get_x(){return x;}
};

class B:public virtual A
{

};

class C:public virtual A
{

};

class D:public B,public C
{
public:
    int xx=get_x();

    int get_x_D(){return xx;}
    int get_y_D(){return y;}
    int get_z_D(){return z;}
};

int main()
{
    A a1;
    B b1;
    C c1;
    D d1;
    cout<<d1.get_x_D()<<" "<<d1.get_y_D()<<" "<<d1.get_z_D()<<endl;
    return 0;
}




