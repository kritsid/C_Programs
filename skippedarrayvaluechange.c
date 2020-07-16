#include<stdio.h>
int main()
{
	int a[10],i,n,j;
	printf("Enter the number of elements");
	scanf("%d", &n);
	printf("Enter the value of elements");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i+=2)
	{
		a[i]=a[i]*3;
	}
	for(j=1;j<n;j+=2)
	{
		a[j]=a[j]-2;
	}
	for(i=0;i<n;i++)
	{
		printf(" %d ", a[i]);
	}
}
