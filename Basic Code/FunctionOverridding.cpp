#include<iostream>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout<<"Animal Sound\n";
    }
};

class Dog:public Animal
{
    public:
    void sound()
    {
        cout<<"Dogs bark\n";
    }
};

class Cat:public Animal
{
    public:
    void sound()
    {
        cout<<"Cat meow\n";
    }
};

int main()
{
    Animal a1;
    a1.sound();

    Dog d1;
    d1.sound();

    Cat c1;
    c1.sound();
    return 0;
}
