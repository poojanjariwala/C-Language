#include<stdio.h>
#include<conio.h>

int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if(age<=0 || age>100)
	{
		if(age==0)
		{
			printf("0 age is not allowed");	
		}
		else if(age<0)
		{
			printf("Negative age is not allowed");
		}
		else
		{
			printf("Age greater than 100 is not allowed");
		}
	}
	else
	{
		if(age>=18)
		{
			printf("You are eligible for voting");
		}
		else if(age<18)
		{
			printf("You are not eligible for voting");
		}
	} 
}
