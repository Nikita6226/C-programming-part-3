/*Accept the price from user. Ask the user if he is a student (user may say yes or no).
 If he is a student and he has purchased more than 500 discount is 20% otherwisediscount is 10%.
 But if he is not a student then if he has purchased more than 600 discount is 15% otherwise
 there is no discount. */

#include <stdio.h>
void price(double price, char isStudent);
void main()
{
    double priceValue;
    char isStudent;

    printf("Enter the price: ");
    scanf("%lf", &priceValue);

    printf("Are you a student? (Y/N): ");
    scanf(" %c", &isStudent); // space before %c to consume any leftover newline

    price(priceValue, isStudent);
}
void price(double priceValue, char isStudent)
{
    double final_price;
    if (isStudent == 'Y' || isStudent == 'y')
    { // if the user is a student
        if (priceValue > 500)
        {
            final_price = priceValue - (priceValue * 0.20); // 20% discount
        }
        else
        {
            final_price = priceValue - (priceValue * 0.10); // 10% discount
        }
    }
    else if (isStudent == 'N' || isStudent == 'n')
    { // if the user is not a student
        if (priceValue > 600)
        {
            final_price = priceValue - (priceValue * 0.15); // 15% discount
        }
        else
        {
            final_price = priceValue; // no discount
        }
    }
    printf("Final price is: %lf\n", final_price);
}