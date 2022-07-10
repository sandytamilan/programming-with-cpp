#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,j,sub=0;
    cin>>n;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sub=sub-a[i];
    }
    cout<<sub;
    return 0 ;
}
