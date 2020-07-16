#include<stdio.h>
void main()
{
	int x;
	printf("Enter a number");
	scanf("%d",&x);
	if(x%100==0)
	{
		printf("It is a century year",x);
	
		if(x%400==0)
		{
			printf("It is a leap year",x);
		}
		else
		{
			printf("It is not a leap year",x);
		}
	}
	else
	{
		printf("It is a non century year",x);
	}
		if(x%4==0)
			{
				printf("It is a leap year",x);
			}
			else
			{
				printf("It is not a leap year",x);
			}
}
