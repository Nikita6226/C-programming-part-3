/*Displya a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to
enter his choice , then based on that perform the desired operations.*/
#include <stdio.h>

int evenOdd();          // Function declaration for checking even/odd
double basicSalary();   // Function declaration for calculating basic salary

int main() {
    int choice;

    // Display menu
    printf("Menu:\n");
    printf("1. Check if a number is even or odd\n");
    printf("2. Calculate basic salary with allowances\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int res = evenOdd();
        if (res == 1)
            printf("Number is even\n");
        else
            printf("Number is odd\n");
    } else if (choice == 2) {
        double salary = basicSalary(); 
        printf("Total salary: %.2lf\n", salary);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

int evenOdd() {
    int no = 50;  // Using the fixed value of 50
    if (no % 2 == 0) {
        return 1;  // Return 1 if the number is even
    } else {
        return 0;  // Return 0 if the number is odd
    }
}

double basicSalary() {
    double da, ta, hra;
    double basics = 3000;  // Fixed basic salary

    if (basics < 5000) {
        da = basics * 0.10;  // 10% of basic salary
        ta = basics * 0.20;  // 20% of basic salary
        hra = basics * 0.25; // 25% of basic salary
    } else {
        da = basics * 0.15;  // 15% of basic salary
        ta = basics * 0.25;  // 25% of basic salary
        hra = basics * 0.30; // 30% of basic salary
    }

    double totalSalary = basics + da + ta + hra;
    return totalSalary;  // Return the calculated total salary
}
