// Finding area and perimeter of rectangle or Circle
// flowchart

#include <stdio.h>
void periC();
void periR();
void areaC();
void areaR();
void main()
{
    int l = 10, w = 5, r = 5;
    periC(r);
    periR(l, w);
    areaC(r);
    areaR(l, w);
}

// area of rectangle
void areaR(int l, int w)
{
    int rarea = l * w;
    if (l && w > 0)
    {
        printf("\nArea of Rectangle = %d", rarea);
    }
    else
    {
        printf("\nInvalid diamensions!");
    }
}

// perimeter of rectangle
// perimeter of R : P=(L*W)*2
void periR(int l, int w)
{
    int rperi = (l + w) * 2;
    if (l && w > 0)
    {
        printf("\nPerimeter of Rectangle= %d", rperi);
    }
}

// perimeter of Circle : P=2*3.14*r
// A of Circle +3.14 * r*r
void areaC(int r)
{
    int carea = 3.14 * r * r;
    if (r > 0)
    {
        printf("\nArea of circle is =%d", carea);
    }
    else
    {
        printf("\nRadius is invalid");
    }
}
// Perimeter of c
void periC(int r)
{
    int cperi = 2 * 3.14 * r;
    if (r > 0)
    {
        printf("\nPerimeter of circle is = %d", cperi);
    }
    else
    {
        printf("\nRadius is invalid");
    }
}
