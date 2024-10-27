// Find factorial of number.

#include <stdio.h>
void checkFact(int num);
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    checkFact(num);
}

void checkFact(int num)
{

    unsigned long long factorial = 1;

    if (num < 0)
    {
        printf("Number %d is negative", num);
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        printf("Factorial is: %llu\n", factorial);
    }
}