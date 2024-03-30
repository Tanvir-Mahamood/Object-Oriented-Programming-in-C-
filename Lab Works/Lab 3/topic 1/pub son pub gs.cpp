#include <iostream>
using namespace std;

class Father
{
private:
    int money=1000;
protected:
    int gold=100;
public:
    int land=10;

    int get_money_father()
    {
        return money;
    }
};

class Son:public Father
{
public:
    int Money_son=get_money_father();
    int Gold_son=gold;
    int Land_son=land;

    void display()
    {
        cout<<"In Son class,\n";
        cout<<"Money="<<Money_son<<endl;
        cout<<"Gold="<<Gold_son<<"\n";
        cout<<"Land="<<Land_son<<"\n";
    }
};

class GrandSon:public Son
{
public:
    void display()
    {
        cout<<"In Grandson class,\n";
        cout<<"Money="<<Money_son<<endl;
        cout<<"Gold="<<Gold_son<<"\n";
        cout<<"Land="<<Land_son<<"\n";
    }
};

int main()
{
    Father f;
    Son s;
    GrandSon gs;
    s.display();
    gs.display();
    return 0;
}
