#include<iostream>
using namespace std;

int partition(int input[], int size){
    int x=input[0];
    int count=0;
    for(int i=1; i<size; i++){
        if(input[i]<=x){
            count++;
        }
    }
    
    input[0]=input[count];
    input[count]=x;
    int i=0;
    int j=size-1;
    while(i<count && j>count){
        if(input[i]<=x){
            i++;
        }
        if(input[j]>x){
            j--;
        }
        else if(input[i]>x && input[j]<=x){
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            i++;
            j--;
        }
    }
    return count;
}

void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    if(size<=1){
        return;
    }
    
    int count=partition(input, size);
    quickSort(input, count);
    quickSort(input+count+1, size-count-1);
      }

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}



