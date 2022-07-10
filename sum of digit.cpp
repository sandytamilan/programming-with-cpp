#include<iostream>
using namespace std;
int main()
{
    int a,sum=0,avg=0,count=0;
    cout<<"Enter the values :";
    cin>>a;
    for(int i=0;a>0;i++)
    {
        i=a%10;
        sum=sum+i;
        a=a/10;
        count++;
    }
    if(sum>0)
    {
        avg=(sum/count);
        cout<<avg;
        cout<<"\n";
    }
    else
    {
        cout<<"error";
    }
    cout<<"the sum of digit is :"<<sum;
    return 0;
}
