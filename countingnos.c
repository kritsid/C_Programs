#include<stdio.h>
int main()
{
int b,count=0,n;
printf("Enter  a number");
scanf("%d",&n);
if(n==0)
{
	count=1;
}
else
{
while(n>0)
{
b=n%10;
n=n/10;
count++;
}
}
printf("%d",count);
return 0;
}
