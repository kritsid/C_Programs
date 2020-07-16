#include<stdio.h>
void main()
{
	int arr[100], i ,position, element, n;
	printf("Enter the size of array");
	scanf("%d", &n);
	printf("Enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the position where you want to insert");
	scanf("%d", &position);
	printf("Enter the value of element");
	scanf("%d", &element);
	for(i=n-1; i>=position; i--)
	{
		arr[i+1]=arr[i];
	}
	arr[position] = element;
	printf("New elements after transfer");
	for(i=0;i<n+1;i++)
	{
		printf("%d\n", arr[i]);
	 } 
}

