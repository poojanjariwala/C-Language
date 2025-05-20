//1. Write C program to input any character and check whether it is alphabet, digit or special character.
#include<stdio.h>
#include<conio.h>

void main()
{
	char n;
	printf("Enter any value: ");
	scanf("%c",&n);
	if(n>='a' && n<='z' || n>='A' && n<='Z')
	{
		printf("It is alphabet");
	}
	else if(n>='1' && n<='9')
	{
		printf("It is digit");
	}
	else
	{
		printf("It is special character");
	}
}




