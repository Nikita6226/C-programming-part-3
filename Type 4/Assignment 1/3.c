// Accept a 3 digit number from user and find the sum of digit and also the reverse number
// shift+alt+f  =indantation
#include <stdio.h>
int sumOfDigit(int num);
int reverse(int num);
void main()
{
    int num;
    printf("Enter the number for sum and reverse: ");
    scanf("%d", &num);

    int digitSum = sumOfDigit(num);
    if (digitSum != -1)
    {
        printf("Sum of Digits = %d\n", digitSum);
    }
    int reversedNum = reverse(num);
    if (reversedNum != -1)
    {
        printf("Reversed Number = %d\n", reversedNum);
    }
}
int sumOfDigit(int num)
{
    int temp,sum = 0;

    if (num > 99 && num < 1000)
    {
        temp = num;

        int rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;

        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;

        rem = temp % 10;
        sum = sum + rem;
        temp = num / 10;

        return sum;
    }
    else
    {
        printf("Incorrect input");
        return -1;
    }
}
int reverse(int num)
{
    int temp = num, rev;

   
    if (num > 99 && num < 999)
    {
        int rem = num % 10;
        num = num / 10;
        rev = rem;

        rem = num % 10;
        num = num / 10;
        rev = (rev * 10) + rem;

        rem = num % 10;
        num = num / 10;
        rev = (rev * 10) + rem;

        return rev;
    }
    else
    {
        printf("Incorrect input");
        return -1;
    }
}