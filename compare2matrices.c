#include<stdio.h>
void main()
{
	int i,j,a[10][10],b[10][10], r,c,r1,c1,count=0,flag=0;
	printf("Enter the number of rows and columns of matrix 1");
	scanf("%d %d" ,&r, &c);
	printf("Enter the number of rows and columns of matrix 2");
	scanf("%d %d" ,&r1, &c1);
	printf("Enter elements");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter elements");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	if(r==r1 && c==c1)
	{ 	
		for(i=0;i<r;i++)
		{
			for(j=0;j<r1;j++)
			{
				if(a[i][j]==b[i][j])
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
		printf("Matrices are comparable and equal");
		else
		printf("Matrices are comparable but not equal");	
	}
	else
	{
		printf("Matrices are not comparable");
	}

}
