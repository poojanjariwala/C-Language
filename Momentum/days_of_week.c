//4. Write C program use switch statement. Display Monday to Sunday.
//    Ex. User Input: M
//    Output: Monday

#include<stdio.h>
#include<conio.h>

void main()
{
	char day;
	printf("Enter 1st letter of day: ");
	scanf("%c",&day);
	switch(day) 
	{
    	case 'M':
            printf("Monday\n");
            break;
        case 't':
            printf("Tuesday\n");
            break;
        case 'W':
            printf("Wednesday\n");
            break;
        case 'T':
            printf("Thursday\n");
            break;
        case 'F':
        	printf("Friday\n");
        	break;
        case 's':
        	printf("Saturday\n");
        	break;
        case 'S':
        	printf("Sunday\n");
        	break;
		default:
            printf("Invalid day\n");	
	}
}


