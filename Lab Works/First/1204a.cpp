#include <bits/stdc++.h>
#define pi 3.1416
using namespace std;

class circle
{
    public:
    double r;
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
    cout<<"Enter the radius of the circle:";
    cin>>c.r;
    cout<<"Area= "<<c.area()<<endl;
    cout<<"Perimeter= "<<c.perimeter()<<endl;

    return 0;
}
