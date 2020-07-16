#include<stdio.h>
#include<math.h>
int main()
{
	long int num,sq,ten,rem,count=0;
	printf("Enter a Number");
	scanf("%ld", &num);
	count=(int)log10(num)+1;
	sq=num*num;
	//ten=pow(10,count);	//ten=(int)ceil(pow(10,n));
	ten=(int)ceil(pow(10,count));
	rem=sq%ten;
	if(num==rem)
	{
		printf("Automorphic");
	}
	else
	{
		printf("Not Automorphic");
	}
	return 0;
	
}
