#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d,e;

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);
	printf("Enter d: ");
	scanf("%d",&d);
	printf("Enter e: ");
	scanf("%d",&e);
	
	if(a==b && b==c && c==d && d==e)
	{
		printf("a,b,c,d and e All are equal");
	}
	else
	{
		if(a>b && a>c && a>d && a>e)
		{
			printf("a is max");
		}
		else if(b>a && b>c && b>d && b>e)
		{
			printf("b is max");
		}
		else if(c>b && c>a && c>d && c>e)
		{
			printf("c is max");
		}
		else if(d>b && d>c && d>a && d>e)
		{
			printf("d is max");
		}
		else
		{
			printf("e is max");
		}
	}
}



