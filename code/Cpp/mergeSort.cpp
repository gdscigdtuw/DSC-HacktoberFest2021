#include <iostream>
using namespace std;

void mergeSort(int *input, int size){
    // Write your code here
    int temp;
    int len1=size/2;
    int len2=size-len1;
    
    
    if(size<=1){
        return ;
    }
    
    mergeSort(input, len1);
    mergeSort(input+len1, len2);
    
    for(int j=0; j<=len1; j++){
    for(int i=0; i<size-1; i++){
         if(input[i]>input[i+1]){
       temp=input[i];
        input[i]=input[i+1];
         input[i+1]=temp;
        
    }
}
    }
    return;
   
       
    }

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}

    
