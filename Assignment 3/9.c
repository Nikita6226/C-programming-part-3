// Check if the given number is pallindrome or not.

#include <stdio.h>
int isPallindrome();
void main()
{
    int res = isPallindrome();
    if (res == 1)
        printf("Number is pallindrome!");
    else
        printf("Number is not pallindrome!");
}
int isPallindrome()
{
    int originalNumber, num, rem, rev = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

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