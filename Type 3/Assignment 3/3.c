// Calculate sum of  numbers in the given range.

#include <stdio.h>
void range(int start ,int end);
void main()
{
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);
    range(start, end);
    
}
void range(int start ,int end)
{
    int sum=0;

    for (int i = start; i <= end; i++)
    {
        sum += i;
    }
    printf("Sum of range is: %d", sum);
}