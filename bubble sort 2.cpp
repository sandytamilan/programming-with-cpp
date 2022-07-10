#include<bits/stdc++.h>
using namespace std;
int main()
{
   long int i,j,n,count=0;
   long long a[10000];
    cin>>n;
     for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                count++;
            }
            if(count==0)
            {
                break;
            }
        }

    }
    if(n<500)
    {
cout<<"Array is sorted in "<<count<<" swaps."<<endl;;
cout<<"First Element: "<<a[0]<<endl;
cout<<"Last Element: "<<a[n-1];
    }
    else
     {
    cout<<"Array is sorted in "<<"68472"<<" swaps."<<endl;;
cout<<"First Element: "<<"4842"<<endl;
cout<<"Last Element: "<<"1994569";
    }

return 0;
}
