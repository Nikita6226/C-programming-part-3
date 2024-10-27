// Check if given number is even or odd

#include <stdio.h>
int evenOdd();
void main()
{
    int evenNum = evenOdd();
    if (evenNum == 1)
        printf("Number is Even");
    else
        printf("Number is odd");
}
int evenOdd()
{
    int no;
    printf("Enter the number: ");
    scanf("%d", &no);

    if (no % 2 == 0)
        return 1;
    else
        return 0;
}
