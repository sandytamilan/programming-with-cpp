#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    cout<<a<<" "<<b;
    for(int i=2;i<9;i++)
    {
        c=a+b;
        cout<<" "<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}
