#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5],i,min_sum=0,max_sum=0;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<=5;i++)
    {
        sort(a,a+i,greater<int>());
    }

    for(i=1;i<5;i++)
    {
        min_sum=min_sum+a[i];
    }
    cout<<min_sum<<" ";
    for(i=0;i<4;i++)
    {
        max_sum=max_sum+a[i];
    }
    cout<<max_sum;

return 0;
}

