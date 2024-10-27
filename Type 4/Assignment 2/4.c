#include <stdio.h>

// Function prototypes
int evenOdd(int num);
double basicSalary(double basics);

void main() {
    int choice;
    printf("1. Even/Odd Check\n2. Basic Salary Calculation\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        int res = evenOdd(num);
        if (res == 1)
            printf("Number is Even\n");
        else
            printf("Number is Odd\n");

    } else if (choice == 2) {
        double basics;
        printf("Enter the basic salary: ");
        scanf("%lf", &basics);

        double salary = basicSalary(basics);
        printf("Total salary: %lf\n", salary);
    } else {
        printf("Invalid choice!\n");
    }
}

int evenOdd(int num) {
    if (num % 2 == 0) {
        return 1;  // Number is even
    } else {
        return 0;  // Number is odd
    }
}

double basicSalary(double basics) {
    double da, ta, hra;

    if (basics < 5000) {
        da = basics * 0.10;  // 10%
        ta = basics * 0.20;  // 20%
        hra = basics * 0.25; // 25%
    } else {
        da = basics * 0.15;  // 15%
        ta = basics * 0.25;  // 25%
        hra = basics * 0.30; // 30%
    }

    return basics + da + ta + hra;  // Return the total salary
}
