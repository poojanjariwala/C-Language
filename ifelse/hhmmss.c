#include<stdio.h>
#include<conio.h>

int main()
{
	int sec;
	printf("Enter seconds: ");
	scanf("%d",&sec);
	
	if(sec>59)
	{
		int min = sec/60;
		sec=sec%60;
		
		if(min>59)
		{
			int h = min/60;
			min = min%60;
			printf("%d:%d:%d",h,min,sec);
		}
		else
		{
			printf("00:%d:%d",min,sec);
		}
	}
	else
	{
		printf("00:00:%d",sec);
		if(sec<0)
		{
			printf("Enter valid value");
		}
	}
}
