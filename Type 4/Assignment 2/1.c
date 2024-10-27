// Find the price of item when discount is given (specify different discount based on price)
// flowchart

#include <stdio.h>
double totalPrice(double price); // function
void main()
{
    double price;
    printf("Enter the price : ");
    scanf("%lf", &price);
    double tPrice = totalPrice(price);
    printf("Total Price: %lf", tPrice);
}
double totalPrice(double price)
{
    double dis;

    if (price <= 500)
    {
        double total_p = price - dis;
        return total_p;
    }
    else
    {
        if (price > 500 && price <= 1000)
        {
            double dis = price * 0.05; // price= price -dis
            double total_p = price - dis;
            return total_p;
        }
        else if (price >= 1000 && price <= 1500)
        {
            double dis = price * 0.1;
            double total_p = price - dis;
            return total_p;
        }
        else if (price >= 1500)
        {
            double dis = price * 0.2 / 100;
            double total_p = price - dis;
            return total_p;
        }
    }
}
