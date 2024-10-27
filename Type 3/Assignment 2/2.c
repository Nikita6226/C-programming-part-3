// 2. Write a program to find greatest numbers using nested if else.

#include <stdio.h>
void greatestNum(int a, int b, int c);
void main()
{
    int a, b, c;
    printf("Enter the values: ");
    scanf("%d%d%d", &a, &b, &c);
    greatestNum(a, b, c);
}
void greatestNum(int a, int b, int c)
{
    if (a > b && a > c)
        printf("Greatest number is: %d", a);
    else if (b > a && b > c)
        printf("Greatest number is: %d", b);
    else
        printf("Greatest number is: %d", c);
}