#include<stdio.h>
int main()
{
	int arr[100], i, position, n;
	printf("Enter the size of array");
	scanf("%d", &n);
	printf("Enter the value of elements");
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the position of the element you want to delete");
	scanf("%d", &position);
	if(position>=n)
	{
		printf("Deletion is not possible");
	}
	else
	{
		for(i=position;i<n-1;i++)
		{
			arr[i] = arr[i+1]; 
		}
		printf("Array after deletion");
	
	
		for(i=0;i<n-1;i++)
		{
			printf("%d", arr[i]);
		}
	}
}
