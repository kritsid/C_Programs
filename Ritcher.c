#include<stdio.h>
int main()
{
	float mag;
	printf("What is the magnitude of Earthquake");
	scanf("%f", &mag);
	if(mag<2.1&&mag>0)
	{
		printf("micro");
	}
	else if(mag<3.1&&mag>2.1)
	{
		printf("very minor");
	} 
	else if(mag<4.1&&mag>3.1)
	{
		printf("minor");
	}
	else if(mag<5.1&&mag>4.1)
	{
		printf("light");
	}
	else if(mag<6.1&&mag>5.1)
	{
		printf("moderate");
	}
	else if(mag<7.1&&mag>6.1)
	{
		printf("strong");
	}
	else if(mag<8.1&&mag>7.1)
	{
		printf("major");
	}
	else if(mag<10.1&&mag>8.1)
	{
		printf("great");
	}
	else
	{
		printf("meteoric");
	}
	return 0;
	
}
