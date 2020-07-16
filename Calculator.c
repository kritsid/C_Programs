#include<stdio.h>
int main()
{
	int a,b,add,sub,mult,div;
	char d;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	printf("+");
	printf("-");
	printf("*");
	printf("/");
	printf("Enter your choice");
	scanf(" %c ", &d);
	switch(d)
	{
		case '+':
			add=a+b;
			printf("Addition of %d and %d is %d",a,b,add);
			break;
		case '-':
			sub=a-b;
			printf("Subtraction of %d and %d is %d",a,b,sub);
			break;
		case '*':
			mult=a*b;
			printf("Multiplication of %d and %d is %d",a,b,mult);
			break;
		case '/':
			div=a/b;
			printf("Division of %d and %d is %d",a,b,div);
			break;		
	        default:
	        printf("Enter valid choice");
		    
	}
		return 0;
}
