#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],r,c,i,j,mul[10][10],k;
    cout<<"enter the no of rows :";
    cin>>r;
    cout<<endl;
    cout<<"enter the no of columns :";
    cin>>c;
    cout<<endl;
    cout<<"enter the elements in a :";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"enter the elements in b :";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j]=0;
        for(k=0;k<c;k++)
        {
            mul[i][j]+=a[i][k]*b[k][j];
        }
    }
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        cout<<mul[i][j]<<" ";
    }
    cout<<"\n";
}

return 0;
}
