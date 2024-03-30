#include <bits/stdc++.h>
#define pi 3.1416
using namespace std;

class hello
{
public:
    hello()
    {
        cout<<"This is a constructor.\n";
    }
    void display()
    {
        cout<<"I am a public function.\n";
    }
};

int main()
{
    class hello h1;
    h1.display();

    return 0;
}


