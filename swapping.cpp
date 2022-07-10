#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    cout<<" ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\n";
    cout<<"the swapping of a and b is :"<<a<<" "<<b;
    cout<<"\n";
    if(a%2==0)
       {
        cout<<"It is even number"<<"\n";
       }
    else
    {
        cout<<"It is odd number"<<"\n";
    }
    if(b%2==0)
    {
        cout<<"It is even number"<<"\n";
    }
    else
    {
        cout<<"It is odd number"<<"\n";
    }
    return 0;
}
