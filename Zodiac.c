#include<stdio.h>
void main()
{
    int d,m;
 
    printf("Enter date ");
    scanf("%d", &d);
 
    printf("Enter month (1-12) ");
    scanf("%d", &m);
 
if(d>0&&m>0)
{
	    
	if(m==12&&d>=22&&d<=31||m==1&&d<=19)
        printf("\nCapricon");
    
	else if(m==1&&d>=20&&d<=31||m==2&&d<=17)
        printf("\nAquarius");
    
	else if(m==2&&d>=18&&d<=29||m==3&&d<=19)
        printf("\nPisces");
    
	else if(m==3&&d>=20&&d<=31||m==4&&d<=19)
        printf("\nAries");
    
	else if(m==4&&d>=20&&d<=30||m==5&&d<=20)
        printf("\nTaurus");
    
	else if(m==5&&d>=21&&d<=31||m==6&&d<=20)
        printf("\nGemini");
    
	else if(m==6&&d>=21&&d<=30||m==7&&d<=22)
        printf("\nCancer");
    
	else if(m==7&&d>=23&&d<=31||m==8&&d<=22)
        printf("\nLeo");
    
	else if(m==8&&d>=23&&d<=31||m==9&&d<=22)
        printf("\nVirgo");
    
	else if(m==9&&d>=23&&d<=30||m==10&&d<=22)
        printf("\nLibra");
        
    else if(m==10&&d>=23&&d<=31||m==11&&d<=21)
        printf("\nScorpion");
    
	else if(m==11&&d>=20&&d<=30||m==12&&d<=17)
        printf("\nSagittarius");
    
	else
        printf("\nInvalid Input");
}
else 
{
	printf("\nInvalid Input");
}
}
