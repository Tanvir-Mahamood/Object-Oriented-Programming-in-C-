#include <iostream>
using namespace std;

class base
{
public:
    int a,b;
};

class baseD:public base
{
    public:
    baseD()
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

    b2.display();
    cout<<b3.b<<endl; //can access b as it is public
    return 0;
}
