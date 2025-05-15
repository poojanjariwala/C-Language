#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	int i=2;
	while(i<=n)
	{
		printf("%d ",i);
		i+=2;
	}
}
