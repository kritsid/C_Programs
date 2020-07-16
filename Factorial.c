#include<stdio.h>
int main()
{
	int num,num1,fact=1;
	printf("Enter a Number");
	scanf("%d",&num);
	num1=num;
	
	while(num>0)
	{
		fact=fact*num;
		num--;
	}
	printf("Factorial of %d is %d",num1,fact);
}
