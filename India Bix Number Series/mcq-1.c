#include<stdio.h>
#include<conio.h>

//1.   2, 1, 1/2, 1/4, ... 
int main()
{
	int n=2,i;
	printf("2 1 ");
	for(i=1;i<=8;i++)
	{
		printf("1/%d ",n);
		n*=2;
	}
}
