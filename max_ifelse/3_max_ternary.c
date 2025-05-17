#include<stdio.h>
#include<conio.h>

void main(){


int a,b,c;

printf("Enter a: ");
scanf("%d",&a);

printf("Enter b: ");
scanf("%d",&b);

printf("Enter c: ");
scanf("%d",&c);

(a==b && b==c)?

	printf("a,b and c all are equal..")

	:(b>a)?
		(b>c)?
			printf("b is MAX")
			:printf("c is MAX")
		:(a>c)?
			printf("a is MAX")
			:printf("c is MAX");
}
