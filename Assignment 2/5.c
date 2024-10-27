/*Accept the price from user. Ask the user if he is a student (user may say yes or no).
 If he is a student and he has purchased more than 500 discount is 20% otherwisediscount is 10%.
 But if he is not a student then if he has purchased more than 600 discount is 15% otherwise
 there is no discount. */

#include <stdio.h>
double price();
void main()
{
    double res= price();
    printf("Final price is : %lf", res);
}
double price()
{
    double price, dis, discount, final_price;
    char ch;
    printf("Enter the price : ");
    scanf("%lf", &price);

    printf("Are you student?(Y/N): ");
    scanf(" %c", &ch); // space before %c to consume any leftover newline

    if (ch == 'Y' || ch == 'y')//yes btaya
    {
        if (price > 500)
            final_price = price - price * 0.20;
        else
            final_price = price - price * 0.10;
    }
    else if (ch == 'N' || ch == 'n')
    {
        if (price > 600)
            final_price = price - price * 0.15;
        else
            final_price = price;
    }
    return final_price;
}