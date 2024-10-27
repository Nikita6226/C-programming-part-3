// Check if number is perfect or not.

#include <stdio.h>
void isPerfect(int num);
void main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);
    isPerfect(num);
}
void isPerfect(int num)
{
    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (num == sum)
        printf("Number is Perfect\n");
    else
        printf("Number is not Perfect\n");
}