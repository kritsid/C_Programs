#include<stdio.h>
void main()
{
	int a[10],i,j,n,c,rev=0,b[10],num=0;
	printf("Enter the number of elements");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
			for(j=0;j<n;j++)
			{
				rev=0;
				c=a[j];
				while(a[j]>0)
				{
				
				num=a[j] % 10;
				rev=rev*10+num;
				a[j]=a[j]/10;
				}
			
		

		if(rev==c)
		{
			printf("EQUAL\n");
		}
		else
		{
			printf("NOT EQUAL\n");
		}
	
	
}
}

