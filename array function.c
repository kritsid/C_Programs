#include<stdio.h>
void seclarge(int a[], int);
void secsmall(int a[], int);
void main()
{
	int i,n,j,a[10];
	printf("Enter the number of elements");
	scanf("%d", &n);
	printf("Enter the value of elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[i]>a[j+1])
			{
				int temp=0,j=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	seclarge(a,i);
	secsmall(a,i);
}
void seclarge(int b[],int I)
{
	printf("Second largest number is %d\n", b[I-2]);
}
void secsmall(int b[], int I)
{
	printf("Second smallest number is %d\n", b[1]);
}
