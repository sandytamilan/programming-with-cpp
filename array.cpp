#include<iostream>
using namespace std;
void recurse(int u)
{
    if(u>1)
    {
        recurse(u-1);
    }
    cout<<endl;
    cout<<u;
}
int main()
{
    int i=5;
    recurse(i);
    return 0;
}
