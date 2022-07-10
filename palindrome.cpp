#include<iostream>
using namespace std;
int main()
{
    int n,num,rev=0,rem;
    cout<<"Enter the value :";
    cin>>n;
    num=n;
    while(num!=0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    cout<<rev;
    cout<<"\n";
    if(rev=n)
    {
        cout<<"It is a palindrome";
    }
    else
    {
        cout<<"It is not a palindrome";
    }
    return 0;
}

