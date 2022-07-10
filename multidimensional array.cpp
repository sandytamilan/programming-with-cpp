#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,a[100][100],b[100][100],sum[100][100],transpose[100][100],mul[100][100],i,j;
    cout<<"Enter no of rows : ";
    cin>>r;cout<<endl;
    cout<<"Enter no of columns : ";
    cin>>c;cout<<endl;
    cout<<"the elements of matrix a is : ";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"the elements of matrix b is : ";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"The sum of matrix is : "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<sum[i][j]<<" ";
            if(j==c-1)
            {
                cout<<endl;
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
            if(j==c-1)
            {
                cout<<endl;
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            transpose[j][i]=a[i][j];
        }
    }
    cout<<"the transposed matrix is : ";
    cout<<endl;
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
        cout<<transpose[i][j]<<" ";
        }
            cout<<endl;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(int k=0;k<c;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<"The multiplication of matrix is : "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
