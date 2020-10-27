#include<iostream>
#include<vector>

using namespace std;

// user input
void input(vector<vector<int> >& arr){

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cin>>arr[i][j];
        }
    }

}


// multiplication of two matrix
void multiplication (vector<vector<int> >& arr1,vector<vector<int> >& arr2){

    vector<vector<int> > ans(arr1.size,vector<int>(arr1.size(),0) );

    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr1[0].size();j++){
            for(int k=0;k<arr1[0].size();k++){
            ans[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
       for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr1[0].size();j++){
                cout<<ans[i][j]<<" ";
            }cout<<endl;
        }
}


// wave print
void wavePrint(vector<vector<int> >& arr){
    for(int j=0;j<arr[0].size();j++){
        if(j==0){
            for(int i=0;i<arr.size();i++){
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(int i=arr.size()-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}

int main(){
    vector<vector<int> > arr(4,vector<int>(4,0));
    input(arr);
    
    return 0;
}