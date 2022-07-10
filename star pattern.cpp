#include<iostream>
using namespace std;
int main()
{
    int i,j,k=1;
    cin>>i;
    if(i>0)
    {
    for(i=5;i>=1;i--)
    {
        cout<<"\n";
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
    }}
        else if(i<=0)
        {
            for(i=1;i<=5;i++)
            {
                cout<<"\n";
                for(j=1;j<=i;j++)
                {
                    cout<<"*";
                }
            }
        }
    return 0;
}
