#include<iostream>
using namespace std;

class Base
{
public:
    int x;
    static int cnt;
    Base()
    {
        cnt++;
    }
};

int Base::cnt=0; //Initialization

int main()
{
    cout<<"Initial count="<<Base::cnt<<endl;
    Base obj1;
    cout<<"Count after one object="<<Base::cnt<<endl;

    return 0;
}
