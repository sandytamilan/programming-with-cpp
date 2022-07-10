#include<iostream>
using namespace std;
int main()
{
    int fact=1,i,number;
    cout<<"the number is :";
    cin>>number;
    for(i=1;i<=number;i++)
    {
        fact=fact*i;
    }
    cout<<"the factorial of the number is :"<<fact;
    return  ;
}
