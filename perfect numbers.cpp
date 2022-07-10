#include<iostream>
using namespace std;
int main()
{
    int i,num,sum=0;
    cout<<"enter the number :";
    cin>>num;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        cout<<"It is a perfect number ";
    }
    else
    {
        cout<<"It is not a perfect number ";
    }
    return 0;
}
