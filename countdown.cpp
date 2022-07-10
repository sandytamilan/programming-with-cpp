#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number :";
    cin>>n;
    for(i=n;i>0;i--)
    {
        if(i%5==0)
        {
            cout<<i<<"\n"<<"beep"<<"\n";
        }
        else
        {
            cout<<i<<"\n";
        }

    }
    return 0;
}
