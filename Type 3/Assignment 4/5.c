// fibonacci series

#include <stdio.h>
void fibonacciS(int lower, int upper);
void main()
{
     int lower, upper;

    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    fibonacciS(lower, upper);
}

void fibonacciS(int lower, int upper)
{
    printf("Fibonacci series of %d to %d are: ", lower, upper);

    int a = 0, b = 1, next = 0;

    while (next <= upper)
    {
        if (next >= lower)
        {
            printf("%d ", next);
        }
        a = b;
        b = next;
        next = a + b;
    }
}