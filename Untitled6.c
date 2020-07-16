#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the sides of triangle");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b==c)
	{
		printf("The triangle is equilateral");
	}
	else if(a==b||a==c)
	{
		printf("The triangle is isoceles");
	}
	else
	{
	printf("The triangle is scalene");
	}
}
