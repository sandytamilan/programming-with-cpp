#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,temp=0,sum=0;
    cin>>a;
    cout<<endl;
    temp=a%10;
    sum=temp+temp+temp;
    if((sum>0)&&(sum%3==0))
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"FALSE";
    }
    return 0;
}
