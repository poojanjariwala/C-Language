#include<stdio.h>
#include<conio.h>

//1. Write C program to print all numeric from 1 to n. using do while loop
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	int i=1;
	do
	{
		printf("%d ",i);
		i++;
	}
	while(i<=n);

}
