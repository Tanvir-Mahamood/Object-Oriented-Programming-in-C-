#include<iostream>
using namespace std;
//Unary Operator Overloading

class Weight
{
private:
    int kg;
public:
    Weight()
    {
        kg=0;
    }
    Weight(int x)
    {
        kg=x;
    }
    void print()
    {
        cout<<"Weight in kg= "<<kg<<endl;
    }

    void operator ++() //Pre-Increment Operator Overloading
    {
        ++kg;
    }

    void operator ++(int) //Post-Increment Operator Overloading
    {
        kg++;
    }

    void operator --() //Pre-Decrement Operator Overloading
    {
        --kg;
    }

    void operator --(int) //Post-Decrement Operator Overloading
    {
        kg--;
    }
};

int main()
{
    Weight obj;
    cout<<"Initially:\n";
    obj.print();

    cout<<"PreIncrement:";
    ++obj;
    obj.print();

    cout<<"PostIncrement:\n";
    obj++;
    obj.print();


    Weight obj2(10);
    cout<<"Initially:\n";
    obj2.print();

    cout<<"PreDecrement:";
    --obj2;
    obj2.print();

    cout<<"PostDecrement:\n";
    obj2--;
    obj2.print();

    return 0;
}

