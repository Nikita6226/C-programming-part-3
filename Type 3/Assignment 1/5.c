/*Calculating total salary based on basic. If basic <5000 da, ta and hra
will be 10%, 20%, 25% respectively otherwise da, ta, hra will be 15%, 25%,
and 30% respectively.*/
#include <stdio.h>

void basicSalary(double basic); // Function declaration

int main() {
    double basics;
    printf("Enter Basic salary: ");
    scanf("%lf", &basics);
    basicSalary(basics); // Call the function with the basic salary as a parameter
    return 0;
}

void basicSalary(double basic) { // Function definition
    double da, ta, hra, totalSalary;

    if (basic < 5000) {
        da = basic * 0.10;  // 10% of basic salary
        ta = basic * 0.20;  // 20% of basic salary
        hra = basic * 0.25; // 25% of basic salary
    } else {
        da = basic * 0.15;  // 15% of basic salary
        ta = basic * 0.25;  // 25% of basic salary
        hra = basic * 0.30; // 30% of basic salary
    }

    totalSalary = basic + da + ta + hra;
    printf("Total salary: %lf\n", totalSalary); // Print the calculated total salary
}
