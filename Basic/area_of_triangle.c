#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	printf("Enter base: ");
	scanf("%d",&x);
	printf("Enter height: ");
	scanf("%d",&y);
	float b=0.5;
	float a=b*(x*y);
	
	printf("%.1f",a);

}
