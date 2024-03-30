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

class B
{
private:
    int p=9;
protected:
    int q=99;
public:
    int r=999;

    int get_p(){return p;}
};

class C:public A,public B
{
public:
    int xx=get_x();
    int pp=get_p();

    int get_x_C(){return xx;}
    int get_y_C(){return y;}
    int get_z_C(){return z;}

    int get_p_C(){return pp;}
    int get_q_C(){return q;}
    int get_r_C(){return r;}
};

int main()
{
    A a1;
    B b1;
    C c1;
    cout<<c1.get_x_C()<<" "<<c1.get_y_C()<<" "<<c1.get_z_C()<<endl;
    cout<<c1.get_p_C()<<" "<<c1.get_q_C()<<" "<<c1.get_r_C()<<endl;
    return 0;
}


