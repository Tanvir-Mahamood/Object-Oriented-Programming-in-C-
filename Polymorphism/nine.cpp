#include <iostream>
using namespace std;

class base
{
private:
    int a,b; //private accessed in D-class and main function
public:      //thats why public input function is used
    int input_a()
    {
        cin>>a;
        return a;
    }
    int input_b()
    {
        cin>>b;
        return b;
    }
};

class baseD:private base
{
    public:
        int A,B;
    void get()
    {
        A=input_a();
        B=input_b();
    }
    void display()
    {
        cout<<A<<" "<<B<<endl;
    }
};

int main()
{
    baseD b1,b2,b3;
    b1.get();
    b2.get();
    b3.get();

    b2.display();
    cout<<b3.B<<endl;
    //How can we access B as it is private in derived class
    return 0;
}





