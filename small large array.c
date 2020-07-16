#include<stdio.h>
void main()
{
	int arr[20],smallest=32767,n,i,largest;
	printf("Enter the number of elements");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]<smallest)
		{
			smallest=arr[i];
		}
	}
	printf("Smallest number is %d", smallest);
}
