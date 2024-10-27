// Check if given number is even or odd

#include <stdio.h>
int evenOdd(int num);
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int evenNum = evenOdd(num);
    if (evenNum == 1)
        printf("Number is Even");
    else
        printf("Number is odd");
}
int evenOdd(int num)
{
    
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}
