#include<stdio.h>
#include<conio.h>

//4. Write C program to find sum of first and last digit of a number.

int main()
{
	int n,count=0;
	printf("Enter num: ");
	scanf("%d",&n);
	
	if(n==0)
	{
		printf("sum is 0 ");
	}
	else
	{
		if(n<10)
		{
			printf("sum is %d ",n);
		}
		else
		{
			int last = n%10;
			while(n>=10)
			{
				n=n/10;
			}
			int sum = last + n;
			printf("sum is %d",sum);
		}
		
	}
}
