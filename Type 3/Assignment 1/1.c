// finding Farenhit from Celcious
// (0degree*9/5) + 32 = 32 degree F
// with para without retun

#include <stdio.h>
float farenhit(float);
void main()
{
    float res;
    farenhit(res);
}
float farenhit(float res)
{
    float c = 23;
    res = (c * 9 / 5) + 32;
    printf("Temp in F = %f", res);
}
//all 4 assignment in type 3 convert into pointer
