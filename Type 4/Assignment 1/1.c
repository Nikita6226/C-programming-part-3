// finding Farenhit from Celcious
// (0degree*9/5) + 32 = 32 degree F
// with para with retun

#include <stdio.h>
float farenhit(float);
void main()
{
    float res;
    res = farenhit(res); // call
    printf("Temp in F = %f", res);
}
float farenhit(float res)
{
    float c = 23;
    res = (c * 9 / 5) + 32;
    return res;
}
