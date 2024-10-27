// check if number is prime or not.

#include <stdio.h>
int prime();
void main()
{
    int res = prime();
    if (res == 1)
        printf("Number is a Prime!");
    else
        printf("Number is not a Prime!");
}
int prime()
{
    int num, isPrime = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}