#include<stdio.h>

int odd_even();
int reverse();
void main()
{
	int result=0,result1=0;
	
	result=odd_even();
	{
	
		if(result==1)
		{
			printf("ODD");
		}
		else
		{
			printf("EVEN");
		}
	}
	result1=reverse();
	{
		printf("reverse is %d", result1);
	}
}
int odd_even()
{
	int num=0;
	printf("Enter a number");
	scanf("%d", &num);
	if(num%2==0)
	{
		return 2;
	}
	else
	{
		return 1;
	}
}
int reverse()
{
	int a=0,rev=0;
	printf("Enter a number");
	scanf("%d", &a);
	while(a!=0)
	{
		rev=a%10;
		rev=rev*10+a;
		a=a/10;
	}
	return rev;
} 
