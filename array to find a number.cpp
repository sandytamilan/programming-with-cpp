#include<iostream>
using namespace std;
int main()
{
    int a[10],i,n,num,pos=0,count=0;
    cout<<"enter the range :";
    cin>>n;
    cout<<"elements in the array :";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<"\n";
    }
    cout<<"enter the element to be searched :";
    cin>> num;
    cout<<endl;

    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            count=1;
            pos=1+i;
        }
    }
    if(count==0)
    {
        cout<<"the element is not found";
    }
    else
    {
        cout<<"the num is :"<<num<<" at the position :"<<pos;
    }
    return 0;
}
