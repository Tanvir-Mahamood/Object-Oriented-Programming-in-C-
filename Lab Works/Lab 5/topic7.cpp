#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> qu;

    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);

    qu.pop();

    cout<<"Front element="<<qu.front()<<endl;
    cout<<"Last element="<<qu.back()<<endl;

    (qu.empty()==1)?cout<<"Empty\n":cout<<"Not Empty\n";

    return 0;
}
