#include<stdio.h>
#include<conio.h>

// 16.   80, 10, 70, 15, 60, ...

void main()
{
	int i,x=80,y=10;
	for(i=1;i<=10;i++)
	{
		printf("%d %d ",x,y);
		x-=10;
		y+=5;
	}
}
