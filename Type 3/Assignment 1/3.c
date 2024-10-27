// Accept a 3 digit number from user and find the sum of digit and also the reverse number
// shift+alt+f  =indantation
#include <stdio.h>
void sumOfDigit(int num);
void reverse(int num);
void main()
{
    int num;
    printf("Enter the 3 digit number: ");
    scanf("%d", &num);
    //int sum = 0;
    if (num >= 100 && num <= 999)
    {
        sumOfDigit(num);
        reverse(num);
    }
    else
        printf("Invalid input!");
}
void sumOfDigit(int num)
{
    int temp = num, sum = 0;

    while (temp>0)
    {
        int rem=temp%10;
        sum+= rem;
        temp/=10;
    }
    printf("Sum od digits: %d",sum);
}
void reverse(int num)
{
    int temp = num, rev=0;

    while (temp>0)
    {
        int rem=temp%10;
        rev= rev*10+rem;
        temp/=10;
    }
    printf("\nReverse number: %d", rev);
}