#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,len;
    char str[100],temp;
    cout<<"Enter the string :";
    cin>>str;
    len =strlen(str)-1;
    for(i=0;i<len;i++,len--)
    {
        temp=str[i];
        str[i]=str[len];
        str[len]=temp;

    }
    cout<<str;
    return 0;
}
