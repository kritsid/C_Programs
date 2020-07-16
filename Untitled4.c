#include<stdio.h>
int main()
{
	int n,a,b,c,d;
	printf("Enter Value");
	scanf("%d",&n);
	d=n;
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=a*a*a+b*b*b+n*n*n;
	if(c==d)
	{
		printf("No. is armstrong");
	}
	
	else
	{
		printf("No. is not armstrong");
	}
	return 0;
}

