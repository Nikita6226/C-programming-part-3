// Find factorial of number.

#include <stdio.h>
int checkFact();
void main()
{
    unsigned long long fact = checkFact();
    printf("Factorial is: %llu", fact);
}

int checkFact()
{
    int num;
    unsigned long long factorial = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

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
        return factorial;
    }
}