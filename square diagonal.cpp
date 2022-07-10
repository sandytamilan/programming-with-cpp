
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100][100],m,i,j,ld=0,rd=0,sum=0;
    cin>>m;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(i==j)
            {
                ld=ld+a[i][j];
            }
            if(i+j==(m-1))
            {
                rd=rd+a[i][j];
            }
        }
    }
    cout<<ld;
    cout<<rd;
    sum=rd-ld;
    sum=abs(sum);
cout<<sum;
    return 0;
}
