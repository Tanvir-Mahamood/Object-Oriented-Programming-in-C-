#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.pop();

    while(! st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    (st.empty()==1)?cout<<"Empty\n":cout<<"Not Empty\n";

    return 0;
}
