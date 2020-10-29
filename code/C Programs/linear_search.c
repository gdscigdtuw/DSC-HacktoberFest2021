#include <stdio.h>
int main()
{
	int a[100];
	int n, val;
	printf("Enter the number of elements");
	scanf("%d",&n);
	printf("Enter the array");
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
	printf("Enter the value to be searched");
	scanf("%d",&val);
	for(int i = 0;i<n;i++)
	{
		if(a[i] == val)
		{
			printf("The value is present in array at position %d" , i+1 );
		}


	}
	return 0;

	
}