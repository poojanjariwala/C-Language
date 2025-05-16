#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,z;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter y: ");
	scanf("%d",&y);
	
	z = x;
	x = y;
	y = z;
	
	printf("\nx=%d \n",x);
	printf("y=%d",y);
}
