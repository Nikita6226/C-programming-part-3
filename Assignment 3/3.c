// Calculate sum of  numbers in the given range.

#include <stdio.h>
int range();
void main()
{
    int sum = range();
    printf("Sum of range is: %d", sum);
}
int range()
{
    int start, end, sum = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        sum += i;
    }
    return sum;
}