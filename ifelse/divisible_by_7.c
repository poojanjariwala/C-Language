#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	printf("Enter num: ");
	scanf("%d",&num);
	
	if(num%7==0)
	{
		printf("num is divisible by 7");
	}
	else
	{
		printf("num is not divisible by 7");
	}
}
