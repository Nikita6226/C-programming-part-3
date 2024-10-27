// check if number is prime or not.

#include <stdio.h>
int prime(int num);
void main()
{
     int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    int res = prime(num);
    if (res == 1)
        printf("Number is a Prime!");
    else
        printf("Number is not a Prime!");
}
int prime(int num)
{
   int isPrime = 1;
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