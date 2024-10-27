// Find the price of item when discount is given (specify different discount based on price)
// flowchart

#include <stdio.h>
double totalPrice(); // function
void main()
{
    double tPrice = totalPrice();
    printf("Total Price: %lf", tPrice);
}
double totalPrice()
{
    double price, dis;
    printf("Enter the price : ");
    scanf("%lf", &price);

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
