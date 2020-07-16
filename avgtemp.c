#include <stdio.h>

int main() 
{
   int i,j,a,b,c,d,sub1,sub2;
   float sub3;
   printf("\nHow many times do you want to enter the temperatures");
   scanf("%d", &i);
   
   for(j=1;j<=i;j++)
   {
   	printf("\nEnter The value of temperature");
    scanf("%d%d%d%d", &a, &b, &c, &d);
      
	  sub1=a-d;
   	  sub2=c-b;
      sub3=sub1-sub2;
      sub3=sub3/2;
   
		   if(sub3>=0)
		   {
		   	printf("%.1f DEGREE(S) ABOVE NORMAL", sub3);
		   }
		   else
		   {
		   	sub3=-1*sub3;
		   	printf("%.1f DEGREE(S) BELOW NORMAL", sub3);
		   }
    }
   return 0;
}
