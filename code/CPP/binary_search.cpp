#include<iostream>
using namespace std;
int main(){
	int arr[15]={2,3,5,6,11,20,25,45,67,69,77,78,89,94,111};
	int key;
	bool res=false;
	cout<<"\n Enter element to be searched: ";
	cin>>key;
	int s=0;
	int e=sizeof(arr)/sizeof(int)-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(arr[mid]==key){
			res=true;
			cout<<"Element found at index: "<<mid;
			break;
		}
		else if(arr[mid]<key){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
		
	if(!res){
		cout<<"Element not found";
	}
}