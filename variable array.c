#include<bits/stdc++.h>
using namespace std;
int main() {

    int n,q,k,i,j;
    cin >> n >> q;
    vector<vector<int> >arr(n);

    for (i=0; i<n; ++i){
        cin>>k;
        arr[i].resize(k);
        for(j=0 ; j<k; ++j){
            cin >> arr[i][j];
        }
    }

    for(int l=0; l<q; ++l){
        cin >> i >> j;
        cout << arr[i][j]<<endl;
    }

    return 0;
}
