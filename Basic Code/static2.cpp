#include<iostream>
using namespace std;

class Base
{
private:
    int x;
    static int cnt;
public:
    Base()
    {
        cnt++;
    }
    static int get_count()
    {
        return cnt;
    }
};

int Base::cnt=0; //Initialization

int main()
{
    cout<<"Initial count="<<Base::get_count()<<endl;
    Base obj1;
    cout<<"Count after one object="<<Base::get_count()<<endl;

    return 0;
}

