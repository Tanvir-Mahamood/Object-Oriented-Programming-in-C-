#include<iostream>
using namespace std;

class Distance
{
private:
    int meter;
public:
    Distance()
    {
        meter=0;
    }
    void display()
    {
        cout<<"Meter value= "<<meter;
    }

    friend void addValue(Distance &d);  //prototype
};

void addValue(Distance &d)
{
    d.meter=d.meter+5;
}

int main()
{
    Distance d1;
    d1.display();
    cout<<endl;
    addValue(d1); //does not depend on object
    d1.display();
    return 0;
}
