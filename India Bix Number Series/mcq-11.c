#include<stdio.h>
#include<conio.h>

// 11.   1.5, 2.3, 3.1, 3.9, ...

void main()
{
	int i;
	float x=1.5;
	for(i=1;i<=10;i++)
	{
		printf("%.1f ",x);
		x+=0.8;
	}
}
