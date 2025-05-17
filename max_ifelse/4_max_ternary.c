#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, c, d;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    printf("Enter d: ");
    scanf("%d", &d);

    (a == b && b == c && c == d) ?
        printf("a, b, c and d all are equal..") 

    :(b > a) ?
        (b > c) ?
            (b > d) ?
                printf("b is MAX") 
                :printf("d is MAX") 
        :(c > d) ?
            printf("c is MAX") 
            :printf("d is MAX")

    :(a > c) ?
        (a > d) ?
            printf("a is MAX") 
            :printf("d is MAX")
    :(c > d) ?
        printf("c is MAX")
        :printf("d is MAX");
}

