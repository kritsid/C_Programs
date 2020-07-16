#include<stdio.h>
void main()
{
	int arr[10],n,i,sum=0,pos=0,neg=0,zero=0;
	printf("Enter the number of elements");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			pos++;
		}
		else if(arr[i]<0)
		{
			neg++;
		}
		else
		{
			zero++;
		}
	}
	printf("Positive elements are %d\n", pos);
	printf("Negative elements are %d\n", neg);
	printf("Zero elements are %d", zero);
}
