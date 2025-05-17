#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c, d, e;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    printf("Enter d: ");
    scanf("%d", &d);
    printf("Enter e: ");
    scanf("%d", &e);

    (a > b) ?
        (a > c) ?
            (a > d) ?
                (a > e) ?
                    printf("a is max\n") :
                    printf("e is max\n") :
            (d > e) ?
                printf("d is max\n") :
                printf("e is max\n") :
        (c > d) ?
            (c > e) ?
                printf("c is max\n") :
                printf("e is max\n") :
        (d > e) ?
            printf("d is max\n") :
            printf("e is max\n") :
    (b > c) ?
        (b > d) ?
            (b > e) ?
                printf("b is max\n") :
                printf("e is max\n") :
        (d > e) ?
            printf("d is max\n") :
            printf("e is max\n") :
    (c > d) ?
        (c > e) ?
            printf("c is max\n") :
            printf("e is max\n") :
    (d > e) ?
        printf("d is max\n") :
        printf("e is max\n");
}

