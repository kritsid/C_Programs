#include<stdio.h>
void main()
{
	int i,j,a[10][10],r,c,count=0,count1=0;
	printf("Enter the number of rows and columns of matrix 1");
	scanf("%d %d" ,&r, &c);
	printf("Enter elements");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]==0)
			{
				count++;
			}
			else
			{
				count1++;
			}
		}
	}
	if(count>count1)
	{
		printf("Given matrix is Sparse");
	}
	else
	{
		printf("Given matrix is not Sparse");
	}
}
