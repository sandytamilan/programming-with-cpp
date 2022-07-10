#include <bits/stdc++.h>

using namespace std;
int main()
{
int a,b;
cin>>a;
while(cin>>b)
{
    if(b<35)
    {
        cout<<b<<endl;
    }
    else if((5-b%5)<3)
    {
        cout<<b+(5-(b%5))<<endl;
    }
    else {
     cout<<b<<endl;
    }
}
    return 0;
}
