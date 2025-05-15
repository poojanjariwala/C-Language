#include<stdio.h>
#include<conio.h>

// 8.   3, 4, 7, 8, 11, 12, ...

void main()
{
	int i,x=3;
	for(i=1;i<=10;i++)
	{
		printf("%d ",x);
		if(i%2==0)
		{
			x+=3;
		}
		else
		{
			x+=1;
		}
	}
}
