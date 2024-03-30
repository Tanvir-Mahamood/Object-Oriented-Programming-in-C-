#include <iostream>
using namespace std;

class Test
{
private:
    int x,y;
    static int z;
public:
    Test() //empty constructor for task 1
    {
        x=0;
        y=0;
        z++; //task 4
    }
    Test(int a,int b) //parameterized for task 2
    {
        x=a;
        y=b;
        z++;
    }
    Test(const Test &obj) //copy cons task 3
    {
        x=obj.x;
        y=obj.y;
        z++;
    }
    void set_value(int a,int b) //method for task 5
    {
        x=a;
        y=b;
        z++;
    }

    int return_x(){return x;}
    int return_y(){return y;}
    int return_z(){return z;}

    void get_xyz() // method for task7
    {
        cout<<"x,y,z= ";
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
};

int Test::z=0;

int main()
{
    int num1,num2,num3,i,valx,valy,maximum=0,index,sum=0;

    class Test obj; //task 1
    class Test obj2(100,1000); //task2
    class Test obj3=obj2; //task 3

    obj.get_xyz(); //task 7
    obj2.get_xyz();
    obj3.get_xyz();

    class Test ob[5];//task 8

    cout<<"Z= "<<ob[4].return_z()<<endl; //task 6

    for(i=0;i<5;i++)
    {
        cout<<"Enter num1 and num2: ";
        cin>>num1>>num2;
        ob[i].set_value(num1,num2);
    }

    for(i=0;i<5;i++)
    {
        valx=ob[i].return_x();
        sum+=valx;
        valy=ob[i].return_y();
        if(valy>maximum)
        {
            maximum=valy;
            index=i;
        }
    }
    cout<<"Sum= "<<sum<<endl; //task 9
    cout<<"The number ob object for highest y= "<<index+1<<endl; //task 10

    return 0;
}

