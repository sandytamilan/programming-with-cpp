#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,sum=0;
    cout<<"Enter the range :";
    cin>>n;
    cout<<endl;
    cout<<"Enter the array values :";
    for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}
