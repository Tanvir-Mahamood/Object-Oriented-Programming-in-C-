#include <bits/stdc++.h>
using namespace std;

void display(list<int> lii)
{
    for(auto it=lii.begin();it != lii.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void displayRev(list<int> lii)
{
    for(auto it=lii.rbegin();it != lii.rend();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    int i,element,ser,cnt_x=0,cnt_xi=0,X,Y,cnt=0;
    list<int> li;
    for(i=0;i<8;i++)
    {
        cin>>element;
        li.push_back(element); //task1
    }

    li.push_front(100); //task2
    li.push_front(1000);

    display(li); //task3
    displayRev(li); //task4

    cout<<"Front element:"<<li.front()<<endl; //task5
    cout<<"Back element:"<<li.back()<<endl; //task6

    li.pop_back(); //task7
    li.pop_front(); //task8

    cout<<"Enter an element for search:"; //task9
    cin>>element;
    auto it=find(li.begin(),li.end(),element);
    if(it != li.end()) cout<<"Found\n";
    else cout<<"Not Found\n";

    cout<<"Enter X and Y for insertion of X before Y:"; //task10
    cin>>X>>Y;
    for(auto itx=li.begin();itx != li.end();itx++)
    {
        cnt_x++;
        if(*itx==Y) break;
    }
    --cnt_x;
    cout<<cnt_x<<endl;
    auto itt=li.begin();
    advance(itt,cnt_x);
    li.insert(itt,X);

    display(li);

    cout<<"Enter X and Y for insertion of X after Y:"; //task11
    cin>>X>>Y;
    for(auto it2=li.begin();it2 != li.end();it2++)
    {
        cnt_xi++;
        if(*it2==Y) break;
    }

    auto it2=li.begin();
    advance(it2,cnt_xi);
    li.insert(it2,X);

    display(li);

    cout<<"Enter an element to count:"; //task12
    cin>>element;
    for(auto it=li.begin();it != li.end();it++)
    {
        if(*it==element) cnt++;
    }
    cout<<"Counted="<<cnt<<endl;



    return 0;
}
