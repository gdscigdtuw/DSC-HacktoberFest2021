#include<iostream>
using namespace std;
void merge(int A[],int lb,int ub,int mid)
{
	int i,j,k,temp[ub-lb+1] ;
	i=lb ;
	j=mid+1 ;
	k=0 ;
	while( i<=mid && j<=ub )
	{
		if( A[i]<A[j] )
		    temp[k++] = A[i++] ;
		else
		    temp[k++] = A[j++] ;
	}
	while( i<=mid )
	{
		temp[k] = A[i] ;
		k++ ;
		i++ ;
	}
	while( j<=ub )
	{
		temp[k] = A[j] ;
		k++ ;
		j++ ;
	}
	for( i=lb ; i<=ub ; i++ )
	{
		A[i] = temp[i-lb] ;
	}
}
void MergeSort(int A[],int lb,int ub)
{
	int mid ;
	if( lb<ub )
	{
		mid = (lb+ub)/2 ;
		MergeSort(A,lb,mid) ;
		MergeSort(A,mid+1,ub) ;
		merge(A,lb,ub,mid) ;
	}
}
int main()
{
	int i,n ;
	cout<<"Enter size of the array : " ;
	cin>>n ;
	int A[n] ;
	for( i=0 ; i<n ; i++ )
	    cin>>A[i] ;
	MergeSort(A,0,n-1) ;
	cout<<"\nSorted array is given as :\n " ;
	for( i=0 ; i<n ; i++ )
	    cout<<A[i]<<" " ;
	return 0 ;
}
