// Check if given number is even or odd

#include <stdio.h>
void evenOdd(int num);
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    evenOdd(num);

}
void evenOdd(int num)
{
    if (num % 2 == 0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");
}
