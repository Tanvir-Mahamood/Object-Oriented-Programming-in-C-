#include <bits/stdc++.h>
#define pi 3.1416
using namespace std;

class circle
{
    double r;
    public:
    void get_input()
    {
        cout<<"Enter the radius of the circle:";
        cin>>r;
    }
    double area()
    {
        return pi*r*r;
    }
    double perimeter()
    {
        return 2*pi*r;
    }
};

int main()
{
    class circle c;
    c.get_input();

    cout<<"Area= "<<c.area()<<endl;
    cout<<"Perimeter= "<<c.perimeter()<<endl;

    return 0;
}

