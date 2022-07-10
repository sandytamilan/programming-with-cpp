#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,len;
    char str[100],a[100];
    gets(str);
    len=strlen(str);
    for(i=len-1;i>=0;i--)
    {
       a[i]=str[i];
    }
    cout<<a[i];
    return 0;
}
