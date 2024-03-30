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
    int xx_B=get_x();

    int get_x_B(){return xx_B;}
    int get_y_B(){return y;}
    int get_z_B(){return z;}
};

class C:public A
{
public:
    int xx_C=get_x();

    int get_x_C(){return xx_C;}
    int get_y_C(){return y;}
    int get_z_C(){return z;}
};

int main()
{
    A a1;
    B b1;
    C c1;
    cout<<b1.get_x_B()<<" "<<b1.get_y_B()<<" "<<b1.get_z_B()<<endl;
    cout<<c1.get_x_C()<<" "<<c1.get_y_C()<<" "<<c1.get_z_C()<<endl;
    return 0;
}



