#include<stdio.h>
#include<conio.h>

int main()
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
	
	//a,b,c,d,e
	if(a>b)
	{
		//a,c,d,e
		if(a>c)
		{
			//a,d,e
			if(a>d)
			{
				//a,e
				if(a>e)
				{
					//a
					printf("a is max");
				}
			
				else
				{
					//e
					printf("e is max");
				}
			}
			//d,e
			else
			{
				if(d>e)	
				{
					printf("d is max");
				}
				else
				{
					printf("e is max");
				}	
			}
		}
		//c,d,e
		else
		{
			if(c>d)	
			{
				if(c>e)
				{
					printf("c is max");
				}
				else
				{
					printf("e is max");
				}
			}
			//d,e	
			else
			{
				if(d>e)
				{
					printf("d is max");
				}
				else
				{
					printf("e is max");
				}
			}
		}
	}
	//b,c,d,e
	else
	{
		if(b>c)
		{
			//b,d,e
			if(b>d)
			{
				if(b>e)
				{
					printf("b is max");
				}
				else
				{
					printf("e is max");
				}
			}
			//d,e
			else
			{
				if(d>e)
				{
					printf("d is max");
				}
				else
				{
					printf("e is max");
				}
			}
		}
		//c,d,e
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("c is max");
				}
				else
				{
					printf("e is max");
				}
			}
			//d,e
			else
			{
				if(d>e)
				{
					printf("d is max");
				}
				else
				{
					printf("e is max");
				}
			}
		}		
	}
}
