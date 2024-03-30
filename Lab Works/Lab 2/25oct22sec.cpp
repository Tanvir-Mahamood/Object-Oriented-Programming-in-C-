#include <iostream>
using namespace std;

class Test
{
private:
    int x,y;
    static int z;
    static int sum;
public:
    int index;
    Test()
    {
        x=0;
        y=0;
        z++; //task 4
    }
    Test(int a,int b)
    {
        x=a;
        y=b;
        z++;
    }
    Test(const Test &obj)
    {
        x=obj.x;
        y=obj.y;
        z++;
    }
    void set_value(int a,int b) //task 5
    {
        x=a;
        y=b;
        sum+=x;
        z++;
    }

    void print_z(){cout<<"Value of Z= "<<z<<endl;} //task 6

    int return_y(){return y;}

    void get_xyz() //task7
    {
        cout<<x<<" "<<y<<" "<<z<<endl;
    }

    void find_sum() //task 9
    {
        cout<<"Sum= "<<sum<<endl;
    }
};

int Test::z=0;
int Test::sum=0;

int main()
{
    int num1,num2,num3,i,val,maximum=0,index;
    class Test obj; //task 1
    class Test obj2(100,1000); //task2
    class Test obj3=obj2; //task 3

    obj.print_z();

    obj.get_xyz();
    obj2.get_xyz();
    obj3.get_xyz();

    class Test ob[5]; //task 8
    for(i=0;i<5;i++)
    {
        cout<<"Enter num1 and num2: ";
        cin>>num1>>num2;
        ob[i].set_value(num1,num2);
    }

    for(i=0;i<5;i++)
    {
        val=ob[i].return_y();
        if(val>maximum)
        {
            maximum=val;
            index=i;
        }
    }

    ob[4].find_sum(); //task 9
    cout<<"Highest= "<<index+1<<endl; //task 10

    return 0;
}
