#include<stdio.h>
#include<conio.h>

int main()

{
	int percentage;
	printf("Enter your percentage: ");
	scanf("%d",&percentage);
	
	if(percentage<0 || percentage>100)
	{
		printf("Enter valid input");
	}
	else
	{
		if(percentage>=90)
		{
			printf("You have secured A+ grade");
		}
		else if(percentage>=80 && percentage<90)
		{
			printf("You have secured A grade");
		}
		if(percentage>=70 && percentage<80)
		{
			printf("You have secured B+ grade");
		}
		if(percentage>=60 && percentage<70)
		{
			printf("You have secured B grade");
		}
		if(percentage>=50 && percentage<60)
		{
			printf("You have secured C grade");
		}
		if(percentage>=35 && percentage<50)
		{
			printf("You have secured D grade");
		}
		if(percentage<35)
		{
			printf("You are FAIL");
		}
	}
}
