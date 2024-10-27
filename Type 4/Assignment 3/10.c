// Add the (first and last) digit of a given number?

#include <stdio.h>
int sum(int num);
void main()
{
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);

    int firstNLast = sum(num);
    printf("Sum of First digit and last digit : %d", firstNLast);
}
int sum(int num)
{
    int firstD, lastD;

    lastD = num % 10;

    for (; num >= 10; num /= 10)
    {
        firstD = num;
    }
    firstD = num;

    int sum = firstD + lastD;
    return sum;
}