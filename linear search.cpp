#include<bits/stdc++.h>
using namespace std;
linearsearch(int arr[],int size,int svalue)
{
    for(int i=0;i<size;i++)
    {
        if(svalue==arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[]={22,85,13,59,9,75,23,12};
    int data;
    cout<<"enter the data :";
    cin>>data;
    int result=linearsearch(a,8,data);
    if(result>=0)
    {
        cout<<"the element "<<a[result]<<" was found at index "<<result<<endl;
    }
    else
    {
        cout<<"the element"<<a[result]<<"was not found"<<endl;
    }
}
