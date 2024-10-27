// Find the price of item when discount is given (specify different discount based on price)

#include <stdio.h>
void totalPrice(double price); // function
void main()
{
    double price;
    printf("Enter the price: ");
    scanf("%lf", &price);

    totalPrice(price);
}
void totalPrice(double price)
{
    double dis = 0, totalPrice;

     if (price > 500 && price < 1000) {
        dis = price * 0.05; // 5% discount
    } else if (price >= 1000 && price <= 1500) {
        dis = price * 0.1; // 10% discount
    } else if (price > 1500) {
        dis = price * 0.2; // 20% discount
    }
    totalPrice = price - dis;
    printf("Total Price after discount: %lf\n", totalPrice);
}
