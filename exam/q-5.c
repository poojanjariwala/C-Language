#include<stdio.h>
#include<conio.h>

//5. Write C program to calculate factorial of a number.
int main()
{
	int n;
	int multi=1;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	
	while(n>=1)
	{
		multi = multi*n;
		n--;
	}
	printf("factorial is : %d",multi);
	
}
