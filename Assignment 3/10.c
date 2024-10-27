// Add the (first and last) digit of a given number?

#include <stdio.h>
int sum();
void main()
{
    int firstNLast = sum();
    printf("Sum of First digit and last digit : %d", firstNLast);
}
int sum()
{
    int num, firstD, lastD;

    printf("Enter the number: ");
    scanf("%d", &num);

    lastD = num % 10;

    for (; num >= 10; num /= 10)
    {
        firstD = num;
    }
    firstD = num;

    int sum = firstD + lastD;
    return sum;
}