#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,count=0;
    int i;
    string s;
    cout<<" the value is : ";
    cin>>n;
    cout<<endl;
    cin>>s;
    long strlength=s.size();
    for(int i=0;i<strlength;i++)
    {
        if(s[i]=='a')
        {
            count++;
        }
    }
    long repeated = n/strlength;
    long left = n-(strlength*repeated);
    int extra=0;
    for(i=0;i<left;i++)
    {
        if(s[i]=='a')
        {
            extra++;
        }
    }
    long Tcount=(repeated*count)+extra;
    cout<<Tcount;
    return 0;
}
