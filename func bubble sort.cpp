#include<iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int a[10],n,i;
    cout<<"Enter the range :";
    cin>>n;
    cout<<"Elements in the array :";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Elements before sorting :";
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    bubblesort(a,n);
    cout<<endl;
    cout<<"Elements after sorting :";
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}

