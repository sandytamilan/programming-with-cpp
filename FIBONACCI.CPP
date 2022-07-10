#include<iostream>
using namespace std;
int main()
{
    int a,b,i,n,c,sum=1;
    cout << "enter the values : ";
    cin >>a;
    cin >> b;
    cout <<"\n";
    cout<<"enter the range: ";
    cin>>n;
    cout << a << "\n";
    cout << b << "\n";
    for(i=2;i<n;++i)
    {
        c=a+b;
        sum = sum+c;
        a=b;
        b=c;
        cout<<b<<"\n";
    }

    cout<<sum;

    return 0;
}
