
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[20] = { 18, 30, 15, 70, 12 };
    int i, x, pos, n = 5;
    cout<<"Array elements before insertion\n";
    for (i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    x = 50; // element to be inserted
    pos = 4;
    n++;

    for (i = n-1; i >= pos; i--)
    {
     arr[i] = arr[i - 1];
    }
    arr[pos - 1] = x;
    cout<<"Array elements after insertion\n";
    for (i = 0; i < n; i++)
        cout<< arr[i]<<" ";
cout<<endl;
    return 0;
}
