#include<stdio.h>
#include<conio.h>

// 18.   5.2, 4.8, 4.4, 4, ...

int main()
{
	int i;
	float x=5.2;
	for(i=1;i<=10;i++)
	{
		printf("%.1f ",x);
		x-=0.4;
	}
}
