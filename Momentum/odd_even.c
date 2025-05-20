//2. Write C program to check a number is even or odd using ternary operator.
#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	printf("Enter num: ");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("num is even");
	}
	else
	{
		printf("num is odd");
	}
}
