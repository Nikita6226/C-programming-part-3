// Check if the given number is pallindrome or not.

#include <stdio.h>
int isPallindrome(int num);
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int res = isPallindrome(num);
    if (res == 1)
        printf("Number is pallindrome!");
    else
        printf("Number is not pallindrome!");
}
int isPallindrome(int num)
{
    int originalNumber,rem, rev = 0;
    
    originalNumber = num;

    for (num > 0; rem = num % 10; num /= 10)
    {
        rev = rev * 10 + rem;
    }
    if (originalNumber == rev)
        return 1;
    else
        return 0;
}