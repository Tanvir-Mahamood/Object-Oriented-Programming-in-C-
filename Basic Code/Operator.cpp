#include<iostream>
using namespace std;
//Binary Operator Overloading

class Complex
{
private:
    int real,img;
public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    void print()
    {
        cout<<real<<" + i"<<img<<endl;
    }

    Complex operator +(Complex const &obj)
    {
        Complex temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
    }
};

int main()
{
    Complex c1(5,4);
    Complex c2(2,5);
    Complex c3;

    c3=c1+c2; //c3=c1.add(c2);

    c3.print();
    return 0;
}
