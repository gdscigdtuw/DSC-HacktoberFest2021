#include<iostream>
using namespace std;
int main()
{   int sparse[20][20], m,n;
    cout<<"Representation of sparse matrix to triplet form "<<endl;
    cout<<"Enter the no. of rows of sparse matrix"<<endl;
    cin>>m;
    cout<<"Enter the no. of columns of sparse matrix"<<endl;
    cin>>n;
    
    cout<<"Enter the elements of sparse matrix"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n;j++){
            cin>>sparse[i][j];
            
        }
        
    }
   //sparse to matrix Representation
    int size = 0;
    for (int row = 0; row < m; row++){
        for (int column = 0; column < n; column++){
            if (sparse[row][column] != 0){
                size++;
            }
        }
    } 
    int triplet[3][size]; //define triplet matrix
    int k=0;
    for(int row=0; row<m;row++){
        for(int column=0; column<n; column++ ){
            if(sparse[row][column]!=0){
                triplet[0][k]=row;
                triplet[1][k]=column;
                triplet[2][k]=sparse[row][column];
                k++;
            }
        }
    }
     cout<<"The triplet is:"<<endl;
     for(int row=0; row<3; row++){ 
         for(int column=0; column<size; column++){
             cout<< triplet[row][column]<<" ";
         }
         cout<<endl;
     } 
    
    //triplet to sparse conversion
    
    int ne;
    cout<<"Enter the no. of elements in triplet"<<endl;
    cin>>ne;

    int triplet1[3][ne]; int sparse1[20][20]={};
    cout<<"Enter the triplets:"<<endl;
    for(int row=0; row<3; row++){
        for(int column=0; column<ne; column++){
            cin>> triplet1[row][column];
        }
    } 

    for(int j=0; j<ne; j++){
        int p= triplet1[0][j];
        int q=triplet1[1][j];
        sparse1[p][q]= triplet1[2][j];
    } 
    cout<<"sparse matrix is: "<<endl;

    int max_ele = triplet1[0][0];
    for(int i=1;i<ne;i++)
    {
        if(max_ele < triplet1[0][i])
            max_ele = triplet1[0][i];

    }

    int num_rows = max_ele + 1 ;

    max_ele = triplet1[1][0];
    for(int i=1;i<ne;i++)
    {
        if(max_ele < triplet1[1][i])
            max_ele = triplet1[1][i];

    }

    int num_cols = max_ele + 1 ;

    for(int i=0; i<num_rows; i++){
        for(int j=0; j<num_cols; j++){
            cout<<sparse1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}