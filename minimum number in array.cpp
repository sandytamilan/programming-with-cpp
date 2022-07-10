#include<iostream>
using namespace std;
int main()
{
    int i,a[10],n,s;
    cout<<"Enter the range of array elements :";
    cin>>n;
    cout<<"Elements in array :";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    s=a[0];
    for(i=0;i<n;i++)
    {
        if(s>a[i])
        {
            s=a[i];
        }
    }
    cout<<"The minimum element is :"<<s;
    return 0;
}
