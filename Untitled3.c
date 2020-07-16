#include<stdio.h>
int main()
{
	int n,a,b;
	printf("enter the value");
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	a=a+b+n;
	printf("%d",a);
	return 0;
	
	

}
