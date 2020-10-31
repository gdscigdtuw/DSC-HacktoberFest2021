#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&a,int i,int j){
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
}
void final_vector(vector<int>&a, int k){
    int i=0;
    int n=a.size();
    int j;
    while(i<n-1){
        j=i+k-1;
        if(n-1<j){
            reverse(a,i,n-1);
        }
        else{
            reverse(a,i,j);
        }
        i=i+k;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t,n,k;
    cin>>t;
    while(t){
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       final_vector(a,k);
       t--;
    }
    return 0;
}