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

    Weight operator ++() //Pre-Increment Operator Overloading
    {
        //It can handle both two cases
        Weight temp;
        temp.kg = ++kg;
        return temp;
    }

    /*void operator ++(int) //Post-Increment Operator Overloading
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
    }*/
};

int main()
{
    Weight obj1,obj2;
    obj2=++obj1;
    obj2.print();

    Weight obj3(10);
    ++obj3;
    obj3.print();

    return 0;
}


