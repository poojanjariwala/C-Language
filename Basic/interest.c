#include<stdio.h>
#include<conio.h>

void main()
{
	int p,r,t;
	float i;
	printf("Enter principal: ");
	scanf("%d",&p);
	printf("Enter rate of interest: ");
	scanf("%d",&r);
	printf("Enter time: ");
	scanf("%d",&t);
	
	i = (p*r*t)/100;
	
	printf("%.2f",i);

}
