#include <iostream>
#include <climits>
using namespace std;

// Problem: Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers which has the largest sum.

int max_subarray_sum(int arr[], int n) {
	int max_so_far = INT_MIN;
	int current_max = 0;

	for (int i = 0; i < n; i++) {
		current_max += arr[i];
		
		if (max_so_far < current_max) {
			max_so_far = current_max;
		}

		if (current_max < 0) {
			current_max = 0;
		}
	}

	return max_so_far;
}

int main() {
	int n;
	cin >> n;
	
	int arr[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	cout << max_subarray_sum(arr, n) << endl;

	return 0;
}
