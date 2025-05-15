#include<stdio.h>
#include<conio.h>

// 14.   201, 202, 204, 207, ...

void main()
{
	int i,y=1,x=201;
	for(i=1;i<=10;i++)
	{
		printf("%d ",x);
		x = x + y;
		y++;

	}
}
