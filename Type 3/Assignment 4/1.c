#include <stdio.h>
#include <math.h>
void rangeArmstrong(int lower, int upper);
void main()
{
    int lower, upper;
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);
    rangeArmstrong(lower, upper);
}

void rangeArmstrong(int lower, int upper)
{
    printf("Armstrong number between %d to %d are: ", lower, upper);
    for (int num = lower; num <= upper; num++)
    {
        int originalNum = num, rem, sum = 0, n = 0;
        while (originalNum != 0)
        {
            originalNum /= 10;
            ++n;
        }
        originalNum = num;

        while (originalNum != 0)
        {
            rem = originalNum % 10;
            sum += pow(rem, n);
            originalNum /= 10;
        }
        if(sum==num)
        {
            printf("%d\n",num);
        }
    }
}
