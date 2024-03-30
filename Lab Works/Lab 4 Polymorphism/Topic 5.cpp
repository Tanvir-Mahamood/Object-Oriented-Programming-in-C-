#include <iostream>
using namespace std;

class A
{
private:
    int x;
public:
    friend void Add(A &a1);
    friend void IncX(A &a2);
    friend void DecX(A &a3);
    void display() {cout<<"X = "<<x<<endl;}
};

void Add(A &a1)
{
    int val;
    cout<<"Enter value for Add function:";
    cin>>val;
    a1.x=val;
}

void IncX(A &a2)
{
    int m;
    cout<<"Enter value for IncX function:";
    cin>>m;
    a2.x=a2.x+m;
}

void DecX(A &a3)
{
    int n;
    cout<<"Enter value for DecX function:";
    cin>>n;
    a3.x=a3.x-n;
}

int main()
{
    A a;
    Add(a);
    a.display();

    IncX(a);
    a.display();

    DecX(a);
    a.display();

    return 0;
}
