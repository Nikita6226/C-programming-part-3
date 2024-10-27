/*Calculating total salary based on basic. If basic <5000 da, ta and hra
will be 10%, 20%, 25% respectively otherwise da, ta, hra will be 15%, 25%,
and 30% respectively.*/

#include <stdio.h>
int basicSalary(double basics);
void main()
{
     double basics;
    printf("Enetr Basic salary: ");
    scanf("%lf", &basics);
    double totalSalary = basicSalary(basics);
    printf("Total salry: %lf", totalSalary);
}

int basicSalary(double basics)
{
    double da, ta, hra;
    if (basics < 5000)
    {
        da = basics * 0.10;  // 10%= 10/100= 0.10
        ta = basics * 0.20;  // 20%= 20/100= 0.20
        hra = basics * 0.25; // 25%= 25/100= 0.25
        int totalS = da + ta + hra;

        return totalS;
    }
    else
    {
        da = basics * 0.15;  // 15%= 15/100= 0.15
        ta = basics * 0.25;  // 25%= 25/100= 0.25
        hra = basics * 0.30; // 30%= 30/100= 0.30
        int totalS = da + ta + hra;
        
        return totalS;
    }
}
