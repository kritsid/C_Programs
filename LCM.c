#include<stdio.h>
int main()
{
	int a,b,i,max,step,lcm=0;
	printf("Enter two numbers");
	scanf("%d%d", &a, &b);
	if(a>b)
	{
		max=step=a;
	}
	else
	{
		max=step=b;
	}
	while(1)
	{
		if(max%a==0&&max%b==0)
		{
			lcm=max;
			break;
		}
		max=max+step;
	}
	printf("LCM of %d and %d is %d", a,b,lcm);
	return 0;
}

