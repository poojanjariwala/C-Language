#include<stdio.h>
#include<conio.h>

int main()
{
	int investment;
	int income;
	
	printf("Enter your investment amount: ");
	scanf("%d",&investment);
	
	printf("Enter your income amount: ");
	scanf("%d",&income);
	
	if(income<investment)
	{
		printf("You are in Loss..");
	}
	else if(income>investment)
	{
		printf("You are in Profit..");
	}
	else
	{
		printf("You are not in Profit and not is Loss..");
	}
}
