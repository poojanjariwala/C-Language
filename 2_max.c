#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	
	printf("Enter a: ");
	scanf("%d",&a);
	
	printf("Enter b: ");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("a is MAX");
	}
	else if(b>a)
	{
		printf("b is MAX");
	}
	
	else 
	{
		printf("a and b both are equal");
	}
}
