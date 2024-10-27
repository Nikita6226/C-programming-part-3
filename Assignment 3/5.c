// Check if number is armstrong or not.

#include <stdio.h>
#include <math.h> //library here use for Power function
int isArmstrong();

void main()
{
    int armstrong = isArmstrong();
    if (armstrong == 1)
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");
}
int isArmstrong()
{
    int num, temp, sum = 0, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num;
    for (int t = temp; t != 0; t /= 10) // t/=10 means t= t/10
    {
        count++;
    }

    temp = num;

    for (int t = temp; t != 0; t /= 10)
    {
        int rem = t % 10;
        sum += pow(rem, count);
    }
    
    if (num == sum)
        return 1;
    else
        return 0;
}