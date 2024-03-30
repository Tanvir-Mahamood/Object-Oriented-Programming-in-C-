#include <iostream>
using namespace std;

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
    Complex operator + (Complex const &obj)
    {
        Complex res;
        res.real=real+obj.real;
        res.img=img+obj.img;
        return res;
    }
    void display()
    {
        cout<<real<<" +j"<<img<<endl;
    }
};

int main()
{
    Complex ob1(3,4),ob2(4,-3),ob3(0,6),ob4;

    ob4=ob1+ob2+ob3;
    ob4.display();

    return 0;
}

