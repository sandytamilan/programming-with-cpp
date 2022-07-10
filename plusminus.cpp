#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],n,i;
    double   count=0,count1=0,count2=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            count++;
        }
        else if(a[i]<0)
        {
            count1++;
        }
        else if (a[i]==0)
        {
            count2++;
        }
    }
    count=count/n;
    count1=count1/n;
    count2=count2/n;
    cout<<setprecision(4)<<fixed<<count<<endl;
    cout<<setprecision(4)<<fixed<<count1<<endl;
    cout<<setprecision(4)<<fixed<<count2;

    return 0;
}
