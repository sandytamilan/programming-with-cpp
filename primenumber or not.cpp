#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the number until which want to print prime\n";
    cin>>n;
    cout<<"Prime numbers 1 to "<<n<<" are:"<<endl;
    for(i=2; i<=n; i++){
        int counter=0;
        for(j=1; j<=i; j++){
        if(i%j==0){
            counter++;
        }
    }
    if(counter==2){
        cout<<i<<" ";
    }
    }
    return 0;
}
