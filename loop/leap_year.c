#include<stdio.h>
#include<conio.h>

int main()
{
	int start,end;
	printf("Enter starting year: ");
	scanf("%d",&start);
	printf("Enter ending year: ");
	scanf("%d",&end);
	
	while(start<=end)
	{
		if(start%4==0)
		{
			printf("%d ",start);
		}
		
		start++;
	}
}
