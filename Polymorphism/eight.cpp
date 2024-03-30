#include <iostream>
using namespace std;

class base
{
protected:
    int a,b;
};

class baseD:private base
{
    public:
    void get()
    {
        cin>>a>>b;
    }
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    baseD b1,b2,b3;
    b1.get();
    b2.get();
    b3.get();

    b2.display();
    //cout<<b3.b<<endl; cannot access b as it is private after reaching Dclass
    return 0;
}

