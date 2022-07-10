#include<iostream>
using namespace std;
int main()
{
    int n,rem,m,num=0;
    cout<<"enter the number :";
    cin>>n;
    cout<<endl;
    m=n;
    while(m>0)
    {
        rem=m%10;
        num=num+(rem*rem*rem);
        m=m/10;
    }
    cout<<num;
    cout<<"\n";
    if(num==n)
    {
        cout<<"It is a armstrong number";
    }
    else
    {
        cout<<"It is not a armstrong number";
    }
    return 0;
}
