#include<iostream>
using namespace std;
int factorial(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }
}
int main()
{
    int a;
    cout<<"Enter the factorial value :";
    cin>>a;
    factorial(a);
    cout<<factorial(a);
    return 0;
}
