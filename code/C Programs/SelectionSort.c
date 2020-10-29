#include<stdio.h>
int main(){
 
   int i, j, c, temp, num[30];

   printf("How many numbers do you want to enter: ");
   scanf("%d",&c);

   printf("Enter %d elements: ", c);
  
   for(i=0;i<c;i++)
      scanf("%d",&num[i]);
   for(i=0;i<c;i++){
      for(j=i+1;j<c;j++){
         if(num[i]>num[j]){
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
         }
      }
   }

   printf("Sorted elements: ");
   for(i=0;i<c;i++)
      printf(" %d",num[i]);

   return 0;
}