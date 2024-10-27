// 2. Write a program to find greatest numbers using nested if else.

#include <stdio.h>
int greatestNum(int a, int b, int c);
void main()
{
    int a, b, c;
    printf("Enter the values: ");
    scanf("%d%d%d", &a, &b, &c);
    int res = greatestNum(a, b, c);
    printf("Greatest number is :%d", res);
}
int greatestNum(int a, int b, int c)
{
    
    if (a > b && a > c)
        return a;
    if (b > a && b > c)
        return b;
    if (c > a && c > b)
        return c;
}