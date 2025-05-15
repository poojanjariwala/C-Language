#include<stdio.h>
#include<conio.h>

//2.  7, 10, 8, 11, 9, 12, ... 
int main()
{
	int i,x=7;
	for(i=1;i<=10;i++)
	{
		printf("%d ",x);
		if(i%2==0)
		{
		x-=2;
		}
		else
		{
		x+=3;
		}
	}
	
}
