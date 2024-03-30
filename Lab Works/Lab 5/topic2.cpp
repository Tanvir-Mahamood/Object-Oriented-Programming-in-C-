#include <bits/stdc++.h>
using namespace std;

template<typename T1,typename T2,typename T3> class A
{
private:
    T1 x;
    T2 y;
public:
    void setData(T1 a,T2 b)
    {
        this->x=a;
        this->y=b;
    }
    T3 sum()
    {
        return x+y;
    }
};

int main()
{
    A<int,int,int> a;
    a.setData(10,20);
    cout<<"Sum="<<a.sum()<<endl;

    A<int,double,double> b;
    b.setData(10,20.5);
    cout<<"Sum="<<b.sum()<<endl;

    A<double,int,double> c;
    c.setData(10.9,20);
    cout<<"Sum="<<c.sum()<<endl;

    A<double,double,double> d;
    d.setData(10.9,20.5);
    cout<<"Sum="<<d.sum()<<endl;

    return 0;
}
