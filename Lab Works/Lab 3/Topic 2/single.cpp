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
    int aa=get_x();
    int get_x_B(){return aa;}
    int get_y_B(){return y;}
    int get_z_B(){return z;}
};

int main()
{
    A a1;
    B b1;
    cout<<b1.get_x_B()<<" "<<b1.get_y_B()<<" "<<b1.get_z_B()<<endl;
    return 0;
}
