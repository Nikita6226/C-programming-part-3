/*Displya a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to
enter his choice , then based on that perform the desired operations.*/

#include <stdio.h>
void evenOdd(int no);
void basicSalary(double basics);
void main()
{
    int choice;

    printf("Menu:\n");
    printf("1. Even Odd\n");
    printf("2. Basic Salary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        int no;
        printf("Enter a number: ");
        scanf("%d", &no);
        evenOdd(no);
    }
    else if (choice == 2)
    {
        double basics;
        printf("Enter basic salary: ");
        scanf("%lf", &basics);
        basicSalary(basics);
    }
    else
        printf("Invalid choice!\n");
}
void evenOdd(int no)
{
    if (no % 2 == 0)
        printf("Number is even\n");
    else
        printf("Number is odd\n");
}
void basicSalary(double basics)
{
    double da, ta, hra;

    if (basics < 5000)
    {
        da = basics * 0.10;  // 10%= 10/100= 0.10
        ta = basics * 0.20;  // 20%= 20/100= 0.20
        hra = basics * 0.25; // 25%= 25/100= 0.25
    }
    else
    {
        da = basics * 0.15;  // 15%= 15/100= 0.15
        ta = basics * 0.25;  // 25%= 25/100= 0.25
        hra = basics * 0.30; // 30%= 30/100= 0.30
    }
    double totalSalary = basics + da + ta + hra;
    printf("Total salary: %lf\n", totalSalary);
}
