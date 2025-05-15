#include<stdio.h>
#include<conio.h>

int main() 
{
    int i = 1;
    int count = 1;

    while (count <= 5) 
	{
        printf("%d", i);
        if (count < 5) 
		{
            printf(",");
        }
        i = (i * 10) + 1;
        count++;
    }

    return 0;
}
