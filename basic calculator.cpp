#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a,b,sum,sub,div,mul,mod;
    char c[100];
    cin>>c;
    cout<<"HI "<<c<<" welcome!"<<endl;;
    cout<<"Enter the value of a :";
    cin>>a;
    cout<<endl;
    cout<<"Enter the value of b :";
    cin>>b;
    cout<<endl;
    sum=a+b;
    sub=a-b;
    div=a/b;
    mul=a*b;
    mod=a%b;
    cout<<"calculation is done"<<" "<<c;
    cout<<endl;
    cout<<"The sum of a and b is :"<<sum<<endl;
    cout<<"The subtraction of a and b is :"<<sub<<endl;
    cout<<"The multiplication of a and b is :"<<mul<<endl;
    cout<<"The division of a and b is :"<<div<<endl;
    cout<<"The modulus of a and b is :"<<mod<<endl;
    return 0;
}
