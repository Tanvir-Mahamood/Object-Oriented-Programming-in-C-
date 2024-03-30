#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    /*Complex()
    {
        cout<<"Default constructor\n";
    }*/
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }

    Complex(const Complex &ob) //Copy Constructor
    {
        real=ob.real;
        img=ob.img;
    }
    void display()
    {
        cout<<real<<" + i"<<img<<endl;
    }

    int get_real() {return real;}
    int get_img() {return img;}
};

Complex sum(Complex &n1,Complex &n2, Complex &n3) //Objects as parameter
{
    int r,i;

    r=n1.get_real()+n2.get_real()+n3.get_real();
    i=n1.get_img()+n2.get_img()+n3.get_img();

    Complex temp(r,i);
    return temp; //Object return
}

int main()
{
    Complex ob1(5,2),ob2(3,9),ob3,ob4;
    ob3=ob2; //Copy Constructor
    ob1.display();
    ob2.display();
    ob3.display();

    ob4=sum(ob1,ob2,ob3);
    cout<<"Summation= ";
    ob4.display();

    Complex *ptr;
    ptr=&ob1;
    ptr->display();

    ptr=&ob4;
    ptr->display();
    return 0;
}
