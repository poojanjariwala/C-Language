#include<stdio.h>
#include<conio.h>

// 4.  22, 21, 23, 22, 24, 23, ...
int main()
{
	int i,x=22;
	for(i=1;i<=10;i++)
	{
		printf("%d %d ",x,x-1);
		x++;
	}
}
