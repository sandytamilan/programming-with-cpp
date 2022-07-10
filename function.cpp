#include<iostream>
using namespace std;
int swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"swapping of a and b :"<<x<<" "<<y;
    return 0;
}
int main()
{
    int a,b,c;
    cout<<"Enter the number a :";
    cin>>a;
    cout<<"Enter the number b :";
    cin>>b;
    swap(a,b);
    cout<<a<<b;
    return 0;
}
