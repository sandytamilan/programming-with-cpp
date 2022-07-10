#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,c[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
 int count = 0;
    for(int i=0; i<n; i++){
        if(c[i]!=0){
             for(int j=i+1; j<n; j++){
                if(c[i]==c[j]){
                    count++;
                    c[j]=0;
                    break;
                    }
                }
        }
    }
cout<<count;
 return 0;
}

