#include<iostream>
using namespace std;

class Shape
{
protected:
    int hight,width;
public:
    void set_hight(int h)
    {
        hight=h;
    }
    void set_width(int w)
    {
        width=w;
    }
};

class Rectangular:public Shape
{
public:
    int get_area()
    {
        return (hight*width);
    }
};


int main()
{
    Rectangular ob1;
    ob1.set_hight(10);
    ob1.set_width(5);
    cout<<ob1.get_area()<<endl;
    return 0;
}
