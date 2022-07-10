
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a[100],n,i,j,k,count=0;
    cin>>n;
    cin>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        if(i<j)
        {
        if((a[i]+a[j])%k==0)
        {
            count++;
        }
        }
    }
    }
    cout<<count;
    return 0;
}
