#include<stdio.h>
#include<conio.h>

//3.  36, 34, 30, 28, 24, ...  
int main()
{
	int i,x=36;
	for(i=1;i<=10;i++)
	{
		printf("%d %d ",x,x-2);
		x-=6;
	}
}
