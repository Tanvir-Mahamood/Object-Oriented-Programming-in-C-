#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<int,5> ax={10,60,30,70,20};         		//1

    cout<<ax.at(3-1)<<endl;                   		//2
    cout<<ax.front()<<endl;                   		//3
    cout<<ax.back()<<endl;                    		//4

    ax.fill(50);                              		//5

    if(ax.empty()) cout<<"Its empty\n";       		//6
    else cout<<"Not empty\n";

    cout<<ax.size()<<endl;                    		//7
    cout<<*max_element(ax.begin(),ax.end())<<endl;  //8

    auto it=ax.begin();                       		//9
    cout<<*it<<endl;

    it=ax.end();                             		//10
    cout<<it<<endl;

    return 0;
}
