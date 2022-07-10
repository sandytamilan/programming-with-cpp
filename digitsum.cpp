#include<bits/stdc++.h>
using namespace std;
int digisum(int n)
{
    int sum=0;
    while(n>0||sum>9)
    {
        if(n==0)
        {
            n=sum;
            sum=0;
        }
        sum=sum+n%10;;
        n=n/10;
    }
    cout<<sum<<endl;
}


int main()
{
    int n =9243;
   digisum(n);
    return 0;
}
