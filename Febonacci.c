#include<stdio.h>
int main()
{
	int a,i,c=0,d=1,nextterm;
	printf("Enter the Number of Terms");
	scanf("%d", &a);
	
	for(i=1;i<=a;i++)
	{
		printf("%d",c);
		nextterm=c+d;
		c=d;
		d=nextterm;
	}
	return 0;
}
