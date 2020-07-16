#include<stdio.h>
int add();
int main()
{
	int i,j,n,a[20],sum=0;
	printf("enter no. of values");
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	
for(j=0;j<n;j++)
	{
		sum= sum + a[j];
	}
	
	printf("%d", sum);
	
	return 0;
}
//wpa to print and generate all the prime in the first positive n integer where n is greater than equal to sample input 10, output 2,3,5,7.


	
