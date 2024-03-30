#include <iostream>
using namespace std;

class Circuit
{
private:
    int real,img;
public:

    Circuit(int a=0,int b=0)
    {
        real=a;
        img=b;
    }
    Circuit operator + (Circuit const &obj)
    {
        Circuit res;
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
    Circuit c1(3,4);
    Circuit c2(4,-3);
    Circuit c3(0,6);
    Circuit c4=c1+c2+c3;
    c4.display();

    return 0;
}
