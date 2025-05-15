#include<stdio.h>
#include<conio.h>

void main()
{
	int n,sum=0;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	int i=1;
	while(i<=n)
	{
		sum = sum + i;
		i++;
	}
	printf("sum is : %d",sum);
	
}
