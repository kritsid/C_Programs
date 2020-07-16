#include<stdio.h>
void main()
{
	int n,j,i,a[10],rot,last;
	printf("Enter the number of elements");
	scanf("%d", &n);
	printf("Enter the value of elements");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the number of rotations");
	scanf("%d", &rot);
	
	for(i=1;i<=rot;i++)
	{
		last=a[n-1];
		for(j=n-1;j>0;j--)
		{
			a[j]=a[j-1];
		}
		a[0]=last;	
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
}
