//3. Write C program to find out max from 4 numbers using nested if.
#include<stdio.h>
#include<conio.h>

void main()
{


int a,b,c,d;

printf("Enter a: ");
scanf("%d",&a);

printf("Enter b: ");
scanf("%d",&b);

printf("Enter c: ");
scanf("%d",&c);

printf("Enter d: ");
scanf("%d",&d);

if(a==b && b==c && c==d)
{
	printf("a,b,c and d all are equal..");
}

else
	{
		if(b>a)
		{
			if(b>c)
			{
				if(b>d)
				{
					printf("b is MAX");	
				}
				else
				{
					printf("d is MAX");
				}
				
			}
			else
			{
				if(c>a)
				{
					if(c>d)
					{
						printf("c is MAX");	
					}
					else
					{
						printf("d is MAX");
					}
				}
				else
				{
					if(a>d)
					{
						if(a>b)
						{
							printf("a is MAX");
						}
						else
						{
							printf("b is MAX");
						}
					}
					else
					{
						if(d>b)
						{
							if(d>c)
							{
								printf("d is MAX");	
							}
						else
						{
							printf("c is MAX");
						}
							
						}
					}
				}
				
			}
		}
		
		else
		{
			if(a>c)
			{
				if(a>d)	
				{
					printf("a is MAX");
				}
				else
				{
					printf("d is MAX");
				}
			}
			else
			{
				if(c>b)
				{
					if(c>d)
					{
						printf("c is MAX");	
					}
					else
					{
						printf("d is MAX");
					}
				}	
			}
		}
	}
}
	
