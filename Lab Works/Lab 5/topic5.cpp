#include <bits/stdc++.h>
using namespace std;
int main()
{
    tuple<int,string,double> tx;
    tx=make_tuple(100,"Kamal",3.5);           //1

    cout<<get<0>(tx)<<endl;                   //2
    cout<<get<1>(tx)<<endl;                   //3
    cout<<get<2>(tx)<<endl;                   //4

    get<2>(tx)=3.7;

    tuple<int,string,double> bx;
    bx=make_tuple(10,"Jamal",0.5);

    bx.swap(tx);

    cout<<"tx="<<get<0>(tx)<<" "<<get<1>(tx)<<" "<<get<2>(tx)<<endl;
    cout<<"bx="<<get<0>(bx)<<" "<<get<1>(bx)<<" "<<get<2>(bx)<<endl;


    return 0;
}
