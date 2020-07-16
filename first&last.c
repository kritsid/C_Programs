#include<stdio.h>
int main()
{
int a,b,n,sum=0;
printf("Enter  a number");
scanf("%d",&n);
a=n%10;
n=n/10;
while(n>0)
{
b=n%10;
n=n/10;
sum=b+a;
}
printf("%d",sum);
return 0;
}
