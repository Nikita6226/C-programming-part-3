// Calculate sum of  numbers in the given range.

#include <stdio.h>
int range(int start, int end);
void main()
{
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    int sum = range(start, end);
    printf("Sum of range is: %d", sum);
}
int range(int start, int end)
{
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        sum += i;
    }
    return sum;
}