#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m;
    cout<<"enter the value : ";
    cin>>n;
    m=(n+1)/2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                if(i<m)
                {
                    cout<<(n-i+1);
                }
                else
                {
                    cout<<i;
                }
            }
            else if(i+j==n+1)
            {
                if(i<m)
                {
                    cout<<i;
                }
                else
                {
                    cout<<j;
                }
            }
            else
            {
                cout<<" ";
            }

        }
        cout<<"\n";
    }
    return 0;
}
