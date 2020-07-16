#include<stdio.h>
int main()
{
	int s,n,sum,d;
	printf("Enter Value");
	scanf("%d",&n);
	d=n;
	while(n>0)
	{
	s=n%10;
	n=n/10;
	sum=sum+s*s*s*s;
	}
	if(sum==d)
	{
		printf("No. is armstrong");
	}
	
	else
	{
		printf("No. is not armstrong");
	}
	return 0;
}

