#include<iostream>
using namespace std;

class shape
{
public:
    virtual void get_area()=0; //pure virtual function
};

class circle:public shape
{
public:
    void get_area()
    {
        int r;
        cout<<"Enter radius:";
        cin>>r;
        cout<<"Area of circle: "<<3.1416*r*r<<endl;
    }
};

class rectangular:public shape
{
public:
    void get_area()
    {
        int l,h;
        cout<<"Enter length and height";
        cin>>l>>h;
        cout<<"Area of rectangular: "<<l*h<<endl;
    }
};

int main()
{
    circle c1;
    rectangular r1;
    c1.get_area();
    r1.get_area();
    return 0;
}
