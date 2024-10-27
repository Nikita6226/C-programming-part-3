/*Accept the price from user. Ask the user if he is a student (user may say yes or no).
 If he is a student and he has purchased more than 500 discount is 20% otherwisediscount is 10%.
 But if he is not a student then if he has purchased more than 600 discount is 15% otherwise
 there is no discount. */

#include <stdio.h>

double calculateFinalPrice(double price, char isStudent);

void main() {
    double price;
    char isStudent;

    printf("Enter the price: ");
    scanf("%lf", &price);

    fflush(stdin);  // Flush the input buffer

    printf("Are you a student? (Y/N): ");
    scanf(" %c", &isStudent);

    double finalPrice = calculateFinalPrice(price, isStudent);
    printf("Final price is: %lf\n", finalPrice);
}

double calculateFinalPrice(double price, char isStudent) {
    double final_price;

    if (isStudent == 'Y' || isStudent == 'y') {
        if (price > 500) {
            final_price = price - price * 0.20;
        } else {
            final_price = price - price * 0.10;
        }
    } else if (isStudent == 'N' || isStudent == 'n') {
        if (price > 600) {
            final_price = price - price * 0.15;
        } else {
            final_price = price;
        }
    } else {
        printf("Invalid input for student status.\n");
        final_price = price;  // No discount if input is invalid
    }

    return final_price;
}