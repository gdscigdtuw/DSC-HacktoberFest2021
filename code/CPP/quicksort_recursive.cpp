#include<iostream>
using namespace std;

int partition(int *a,int s,int e){

	//inplace
	int i =	s-1;				
	int j = s;

	int pivot=a[e];

	for( ; j<=e-1; ){
		if(a[j]<=pivot){
			//merge the smaller elements in the region 1
			i=i+1;
			swap(a[i],a[j]);
		}
		//expand the larger region
		j=j+1;
	}

	//place the pivot in its position
	swap(a[i+1],a[e]);
	//return the position index of pivot
	return i+1;
}

void quicksort(int *arr,int s,int e){

	//base case
	if(s>=e)
		return;

	//recursive case
	int p = partition(arr,s,e);

	//left side
	quicksort(arr,s,p-1);

	//right side
	quicksort(arr,p+1,e);
}

int main()
{
	int arr[200000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	quicksort(arr,0,n-1);

	//print the array
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
