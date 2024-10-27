// 2. Write a program to find greatest numbers using nested if else.

#include <stdio.h>
int greatestNum();
void main()
{
    int res = greatestNum();
    printf("Greatest number is :%d", res);
}// ok sir
int greatestNum()
{
    int a, b, c;
    printf("Enter the values: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
        return a;
    if (b > a && b > c)
        return b;
    if (c > a && c > b)
        return c;
}