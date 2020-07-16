#include<stdio.h>
void main()
{
	int n,k,i,temp=0,a[10],b[10],n1,c[20];
	printf("Enter the number of elements of first array");
	scanf("%d", &n);
	printf("Enter the number of elements of second array");
	scanf("%d", &n1);
	printf("Enter the value of elements of first array");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the value of elements of second array");
	for(i=0;i<n1;i++)
	{
		scanf("%d", &b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<n1;i++)
	{
		c[n]=b[i];
		n++;
	}
	for(k=0;k<n;k++)
	{
		printf("%d\n", c[k]);
	}
}
