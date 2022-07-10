
// C++ implementation of the above approach
#include <bits/stdc++.h>
using namespace std;

// Print the sum and product of digits
// that divides the number.
void countDigit(int arr[],int n)
{
    int sum, product;
    int ans_count = 0;
    for(int i=0;i<n;i++)
    {
        sum = 0;
        product = 1;
        int temp=arr[i];

        while (temp!=0) {

            // Fetching each digit of the number
            int d = temp % 10;
            temp /= 10;

            // Checking if digit is greater than 0
            // and can divides n.
            sum += d;

            product *= d;

        }
        if(sum == 0 || product == 0)
        {
            ;
        }
        else if(arr[i] % sum == 0 || arr[i] % product == 0)
        {
            ans_count++;
        }
    }
    cout<<endl;
	cout<<ans_count<<endl;
}

// Driver code
int main()
{
    int n;
    cin>>n;
	int a[n];


	for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }

	countDigit(a,n);
	return 0;
}
