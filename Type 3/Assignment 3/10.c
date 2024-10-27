// Add the (first and last) digit of a given number?

#include <stdio.h>
void sum(int num);
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    sum(num);
}
void sum(int num)
{
    int firstD, lastD;
    lastD = num % 10;

    for (; num >= 10; num /= 10)
    {
        firstD = num;
    }
    firstD = num;

    int sum = firstD + lastD;
    printf("Sum of First digit and last digit : %d", sum);
}