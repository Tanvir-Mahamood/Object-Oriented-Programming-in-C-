#include <iostream>
using namespace std;
int main()
{
    int i;
    int ax[5]={10,20,60,40,30};
    cout<<"Enter index:";
    cin>>i;

    try
    {
        if(i>=0 && i<=4) throw i;
        else if(i>4) throw "Out of range error";
        else throw 'a';
    }
    catch(int &i)
    {
        cout<<"Ax["<<i<<"]="<<ax[i]<<"\n";
    }
    catch(char const *error)
    {
        cout<<error<<"\n";
    }

    catch(...)
    {
        cout<<"For all errors\n";
    }

    return 0;
}
