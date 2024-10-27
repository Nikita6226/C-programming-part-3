// Check if number is perfect or not.

#include <stdio.h>
int isPerfect(int num);
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int res = isPerfect(num);
    if (res == 1)
        printf("Number is Perfect");
    else
        printf("Number is not Perfect");
}
int isPerfect(int num)
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
        return 1;
    else
        return 0;
}