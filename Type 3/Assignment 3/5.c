// Check if number is armstrong or not.

#include <stdio.h>
#include <math.h> //library here use for Power function
void isArmstrong(int num);

void main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);
    isArmstrong(num);
}
void isArmstrong(int num)
{

    int temp, sum = 0, count = 0;

    temp = num;
    for (int t = temp; t != 0; t /= 10) { // Calculate the number of digits
        count++;
    }

    temp = num;
    for (int t = temp; t != 0; t /= 10)
    {
        int rem = t % 10;
        sum += pow(rem, count);
    }
    if (num == sum) {
        printf("Number is Armstrong\n");
    } else {
        printf("Number is not Armstrong\n");
    }
}