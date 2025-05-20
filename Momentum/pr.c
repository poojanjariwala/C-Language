//5. Write a C program to input marks of five subjects: Physics, Chemistry, Biology, Mathematics and Computer. 
//    Calculate the percentage and grade according to the following
//        Percentage >= 90% : Grade A
//        Percentage >= 80% : Grade B
//        Percentage >= 70% : Grade C
//        Percentage >= 60% : Grade D 
//        Percentage >= 50% : Grade E
//        Percentage >= 40% : Grade F

#include<stdio.h>
#include<conio.h>

void main()
{
	int Physics, Chemistry, Biology, Mathematics, Computer;
	
	printf("Enter Your Physics Marks: ",Physics);
	scanf("%d",&Physics);
	printf("Enter Your Physics Marks: ",Chemistry);
	scanf("%d",&Chemistry);
	printf("Enter Your Physics Marks: ",Biology);
	scanf("%d",&Biology);
	printf("Enter Your Physics Marks: ",Mathematics);
	scanf("%d",&Mathematics);
	printf("Enter Your Physics Marks: ",Computer);
	scanf("%d",&Computer);
	
	int sum = Physics + Chemistry+ Biology + Mathematics + Computer;
	float percentage = sum/5;
	
	if(Physics<33 || Chemistry<33 || Biology<33 || Mathematics<33 || Computer<33 )
	{
		printf("You are Fail");
	}
	else
	{
		if(percentage>=90)
		{
			printf("You have secured A+ grade");
			printf("Your percentage is %.2f\n",percentage);
		}
		else if(percentage>=80 && percentage<90)
		{
			printf("You have secured A grade");
			printf("Your percentage is %.2f\n",percentage);
		}
		if(percentage>=70 && percentage<80)
		{
			printf("You have secured B+ grade");
			printf("Your percentage is %.2f\n",percentage);
		}
		if(percentage>=60 && percentage<70)
		{
			printf("You have secured B grade");
			printf("Your percentage is %.2f\n",percentage);
		}
		if(percentage>=50 && percentage<60)
		{
			printf("You have secured C grade");
			printf("Your percentage is %.2f\n",percentage);
		}
		if(percentage>=35 && percentage<50)
		{
			printf("You have secured D grade");
			printf("Your percentage is %.2f\n",percentage);
		}
		if(percentage<35)
		{
			printf("You are FAIL");
		}
	}	    
}
