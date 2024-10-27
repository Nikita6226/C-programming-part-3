// num is strong or not

#include <stdio.h>
int isStrong();
void main()
{
    int res = isStrong();
    if (res == 1)

        printf("Number is strong");
    else
        printf("Number is not strong");
}
int isStrong()
{
    int num, originalN, rem, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    originalN = num;
    while (num > 0)
    {
        rem = num % 10;
        int fact = 1;
        for (int i = 1; i <= rem; i++)
        {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    if (sum == originalN)
        return 1;
    else
        return 0;
}