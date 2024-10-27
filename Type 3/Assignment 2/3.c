// 3. Accept two numbers from user and an operator (+, -, *, /, %) based on that perform the desired operations.

#include <stdio.h>
void operator(int no1, int no2, int choice);
void main()
{
    int no1, no2;
    printf("Enter no.1 : ");
    scanf("%d", &no1);
    printf("Enter no2 : ");
    scanf("%d", &no2);

    printf("1.Addition\n2.Sub \n3.Mul \n4.Div \n5Mod \nEnter your choice: ");
    int choice;
    scanf("%d", &choice);
    operator(no1, no2, choice); 
}
void operator(int no1, int no2, int choice)
{
    

    if (choice == 1)
    {
        printf("Addition of two no: %d", no1 + no2);
    }
    else if (choice == 2) // ELSE IF LADDER 
    {
        printf("Substraction of two no: %d", no1 - no2);
    }
    else if (choice == 3)
    {
        printf("Multiplication of two no. : %d", no1 * no2);
    }
    else if (choice == 4)
    {
        printf("Division of two no : %d", no1 / no2);
    }
    else if (choice == 5)
    {
        printf("Modulus of two no: %d", no1 % no2);
    }
    else
    {
        printf("Enter valid choice!!"); 
    }
}