// Accept a 3 digit number from user and find the sum of digit and also the reverse number
// shift+alt+f  =indantation
#include <stdio.h>
int sum();
int reverse();
void main()
{
    int sumOfDigit= sum();
    printf("Sum of Digit = %d",sumOfDigit );

    int reverseNum =reverse();
    printf("%d", reverseNum);
}
int sum()
{
    int temp, num, sum = 0;

    printf("Enter the number for sum: ");
    scanf("%d", &num);

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
int reverse()
{
    int num;
    int temp = num, rev;

    printf("\nEnter the number for reverse: ");
    scanf("%d", &num);

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