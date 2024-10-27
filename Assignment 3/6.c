// Check if number is perfect or not.

#include <stdio.h>
int isPerfect();
void main()
{
    int res = isPerfect();
    if (res == 1)
        printf("Number is Perfect");
    else
        printf("Number is not Perfect");
}
int isPerfect()
{
    int sum = 0, num;

    printf("Enter the number: ");
    scanf("%d", &num);

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