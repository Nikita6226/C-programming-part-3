// Find factorial of number.

#include <stdio.h>
int checkFact(int num);
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    unsigned long long fact = checkFact(num);
    printf("Factorial is: %llu", fact);
}

int checkFact(int num)
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
        return factorial;
    }
}