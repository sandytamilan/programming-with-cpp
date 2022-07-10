#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],n,d,i;
    cin>>n;
    cin>>d;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=d;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=0;i<d;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

