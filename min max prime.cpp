// CPP program to find minimum and maximum
// prime number in given array.
#include <bits/stdc++.h>
using namespace std;

// Function to find count of prime
void prime(int arr[], int n)
{
	// Find maximum value in the array
	int max_val = *max_element(arr, arr + n);

	// USE SIEVE TO FIND ALL PRIME NUMBERS LESS
	// THAN OR EQUAL TO max_val
	// Create a boolean array "prime[0..n]". A
	// value in prime[i] will finally be false
	// if i is Not a prime, else true.
	vector<bool> prime(max_val + 1, true);

	// Remaining part of SIEVE
	prime[0] = false;
	prime[1] = false;
	for (int p = 2; p * p <= max_val; p++) {

		// If prime[p] is not changed, then
		// it is a prime
		if (prime[p] == true) {

			// Update all multiples of p
			for (int i = p * 2; i <= max_val; i += p)
				prime[i] = false;
		}
	}

	// Minimum and Maximum prime number
	int minimum = INT_MAX;
	int maximum = INT_MIN;
	for (int i = 0; i < n; i++)
		if (prime[arr[i]]) {
			minimum = min(minimum, arr[i]);
			maximum = max(maximum, arr[i]);
		}

	int difference;
	difference = maximum-minimum;
	cout<<difference;
}

// Driver code
int main()
{

	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

	prime(arr, n);

	return 0;
}

