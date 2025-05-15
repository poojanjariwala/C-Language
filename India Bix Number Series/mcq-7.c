#include<stdio.h>
#include<conio.h>

// 7.   58, 52, 46, 40, 34, ...

int main()
{
	int i,x=58;
	for(i=1;i<=10;i++)
	{
		printf("%d ",x);
		x-=6;
	}
}
