#include <stdio.h>
//To find all pairs in given array whose sum is equal to given number.
int main()
{
    int arr[100];
    int n,c;
    int sum = 0;
    printf("enter the number of elements:- ");
    scanf("%d",&n);
    printf("Enter the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of sum:- ");
    scanf("%d",&sum);
    for(int i=0;i<n;i++)
    {
        c = arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(sum == c + arr[j]){
                printf("%d",c);
                printf(",");
                printf("%d",arr[j]);
                printf("\n");
            }
        }
    }
    return 0;
}
