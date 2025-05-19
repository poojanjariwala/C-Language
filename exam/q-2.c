#include<stdio.h>
#include<conio.h>

//2. Write C program to print multiplication table of any number.

int main()
{
	int i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		int ans=i*n;
		printf("%d * %d = %d \n",n,i,ans);
	}
}
