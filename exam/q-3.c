#include<stdio.h>
#include<conio.h>

//3. Write C program to count number of digits in a number.

int main()
{
	int n,count=0;
	printf("Enter num: ");
	scanf("%d",&n);
	
	if(n==0)
	{
		printf("0 is 1 digit num ");
	}
	else
	{
		while(n>0)
		{
			n = n/10;
			count++;	
		}
		printf("%d is %d digit num",n,count);
	}
		
}
		
