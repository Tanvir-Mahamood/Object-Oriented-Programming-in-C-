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

class B:public A
{
public:
    int xx=get_x();
};

class C:public B
{
public:
    int get_x_C(){return xx;}
    int get_y_C(){return y;}
    int get_z_C(){return z;}
};

int main()
{
    A a1;
    B b1;
    C c1;
    cout<<c1.get_x_C()<<" "<<c1.get_y_C()<<" "<<c1.get_z_C()<<endl;
    return 0;
}

