#include<stdio.h>

int main(){

   int c, temp, i, j, num[60];

   printf("How many numbers do you want to enter: ");
   scanf("%d",&c);

   printf("Enter %d numbers: ",c);

   for(i=0;i<c;i++)
   scanf("%d",&num[i]);

   for(i=c-2;i>=0;i--){
      for(j=0;j<=i;j++){
        if(num[j]>num[j+1]){
           temp=num[j];
           num[j]=num[j+1];
           num[j+1]=temp;
        }
      }
   }

   printf("Sorted form: ");
   for(i=0;i<c;i++)
      printf(" %d",num[i]);

   return 0;
}
