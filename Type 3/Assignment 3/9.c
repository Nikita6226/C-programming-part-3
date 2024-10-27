// Check if the given number is pallindrome or not.

#include <stdio.h>
void isPallindrome(int num);
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
     isPallindrome(num);
}
void isPallindrome(int num)
{
    int originalNumber,rem, rev = 0;    

    originalNumber = num;

    for (num > 0; rem = num % 10; num /= 10)
    {
        rev = rev * 10 + rem;
    }
    if (originalNumber == rev)
        printf("Number is pallindrome!");
    else
        printf("Number is not pallindrome!");
}