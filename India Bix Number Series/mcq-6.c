#include<stdio.h>
#include<conio.h>

// 6. 21, 9, 21, 11, 21, 13, 21, ...
int main()
{
	int i,x=21,y=9;
	for(i=1;i<=10;i++)
	{
		printf("21 %d ",y);
		y+=2;
	}
}
