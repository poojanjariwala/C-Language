#include<stdio.h>
#include<conio.h>

void main()
{
	int n,multi=1;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	
	while(n>=1)
	{
		multi = multi*n;
		n--;
	}
	printf("factorial is : %d",multi);
	
}
