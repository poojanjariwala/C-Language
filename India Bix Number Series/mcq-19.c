#include<stdio.h>
#include<conio.h>

// 19.   8, 6, 9, 23, 87 , ...

int main()
{
	int i,x=8,z=2,y=1;
	for(i=1;i<=10;i++)
	{
		printf("%d ",x);
		x=x*y-z;
		y++;
		z++;
	}
} 
