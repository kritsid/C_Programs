#include<stdio.h>
#include<stdlib.h>
void main()
{
	int pin,choice,account_number; 
	float left,amount,total,withdraw,deposit;

	printf("\nWelocme to the ATM Banking");
	printf("\nEnter your account number");
	scanf("%d",&account_number);
	if(account_number==12890071)
	printf("you have entered correct account number");
	printf("\nYou have the following options");
	printf("\nEnter pin");
	scanf("%d",&pin);

	total=15287;

	if(pin==1748)
	 {
	  printf("\n1. Check account balance");
	  printf("\n2. Withdraw amount");
	  printf("\n3. Deposit amount");
	  printf("\n4. Exit");
	  printf("\nEnter your choice");
	  scanf("%d",&choice);
	  switch(choice)
	  {
	   case 1:
	    printf("\nThe account balance is Rs.%2f",total);
	    break;

	   case 2:
	    printf("\nEnter the amount you want to withdraw");
	    scanf("%f",&amount);
	    
	    if(total>amount) 
	    {
	     withdraw=total-amount;
	     printf("\nThe new balance is Rs.%2f",withdraw);
	    }
	    else
	     printf("\nNot enough balance");

	    break;

	   case 3:
	    printf("\nEnter the amount you want to deposit");
	    scanf("%f",&deposit);
	    left=total+deposit;
	    printf("\nThe new balance is Rs.%2f",left);
	    break;
       
	   case 4:
       	exit (0);
       }
	   
	else
	printf("you have entered incorect account number");
	else
	printf("\nPin is wrong");
}
}
