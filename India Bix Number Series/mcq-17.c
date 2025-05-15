#include<stdio.h>
#include<conio.h>

// 17.   2, 6, 18, 54, ...

int main()
{
	int i,x=2;
	for(i=1;i<=10;i++)
	{
		printf("%d ",x);
		x*=3;
	}
}
