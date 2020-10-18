//Program to print an array in reverse order

#include<iostream>
using namespace std;

void reverse(int arr[], int n){
	for(int low=0, high=(n-1); low<high; low++, high--){
		swap(arr[low], arr[high]);
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	reverse(arr,n);
	return 0;
}
