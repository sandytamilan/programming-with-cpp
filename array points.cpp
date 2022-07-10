#include<iostream>
using namespace std;
int main()
{
    int a[10],b[10],i,j,alice=0,bob=0;
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<3;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<3;i++)
    {

            if(a[i]>b[i])
            {
                alice++;
            }
            else if(a[i]<b[i])
            {
                bob++;
            }
           else if(a[i]==b[i])
            {
              bob=0;
            }

    }
cout<<alice;
cout<<" "<<bob;
return 0;
}
