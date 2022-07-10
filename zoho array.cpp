#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={8,6,8,6,6,6,7,6,5,8,2,1};
    int decr;
    int n = sizeof(a)/sizeof(a[0]);
        for(int j=0;j<n-1;j++)
        {
            if((a[j]>a[j+1])&&(a[j+1]>a[j+2]))
            {
                cout<<a[j]<<"<"<<a[j+1]<<"<"<<a[j+2];
            }
        }
    return 0;
}
