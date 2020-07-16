#include<stdio.h>
int secondlargest(int a[],int);
int secondsmallest(int a[],int);
int average(int , int );
void logic(float,int,int b[]);
void sub(float, int, int b[]);
void main()
{
	int a[10],n,k,j,i,max,min,avg;
	printf("Enter the size of array");
	scanf("%d", &n);
	printf("Enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=0,j=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
		max=secondlargest(a,i);
		min=secondsmallest(a,i);
		avg=average(max,min);
		logic(avg,n,a);
		sub(avg,n,a);
}
int secondlargest(int b[],int I)
{
	printf("Second largest array is %d\n", b[I-2]);
	return b[I-2];
}
int secondsmallest(int b[], int I)
{
	printf("Second smallest array is %d\n", b[1]);
	return b[1];
}
int average(int max,int min)
{
	float avg;
	avg = (max+min)/2;
	printf("Average value is %f\n", avg);
	return avg;
}
void logic(float avg,int n, int b[])
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(b[i]==avg)
		{
			count++;
		}
	}
	printf("Element repeats %d times\n", count);
}
void sub(float avg, int n, int b[])
{
	int i;
	float sub;
	for(i=0;i<n;i++)
	{
		sub = avg - b[i];
		printf("%.1f\n", sub);
	}
}
