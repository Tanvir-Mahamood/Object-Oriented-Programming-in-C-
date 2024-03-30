#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string> px;
    px=make_pair(10,"Rajshahi");              //1

    cout<<px.first<<endl;                     //2
    cout<<px.second<<endl;                    //3

    get<0>(px)=20;                            //4

    pair<int,string> bx;
    bx=make_pair(100,"Dhaka");

    bx.swap(px);
    cout<<"px="<<px.first<<" "<<px.second<<endl;
    cout<<"bx="<<bx.first<<" "<<bx.second<<endl;

    return 0;
}
