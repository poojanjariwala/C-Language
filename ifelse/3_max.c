#include<stdio.h>
#include<conio.h>

void main(){


int a,b,c;

printf("Enter a: ");
scanf("%d",&a);

printf("Enter b: ");
scanf("%d",&b);

printf("Enter c: ");
scanf("%d",&c);

if(a==b && b==c)
{
	printf("a,b and c all are equal..");
}

else
{
	if(b>a)
	{
		if(b>c)
		{
			printf("b is MAX");
		}
		else
		{
			printf("c is MAX");
		}
	}
	else
	{
		if(a>c)
		{
			printf("a is MAX");
		}
		else
		{
			printf("c is MAX");
		}
	}
}
}
