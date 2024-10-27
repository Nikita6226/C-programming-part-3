// Finding area and perimeter of rectangle or Circle
// flowchart

#include <stdio.h>
int periC();
int periR();
int areaC();
int areaR();
void main() 
{
    periC();
    periR();
    areaC();
    areaR();

    int rectangleArea= areaR();
    printf("\nArea of Rectangle =%d ", rectangleArea);
    int rectanglePeri= periR();
    printf("\nPerimeter of Rectangle= %d", rectanglePeri);
    int circleArea= areaC();
    printf("\nArea of circle is =%d", circleArea);
    int circlePeri= periC();
    printf("\nArea of circle is =%d",circlePeri);
}

// area of rectangle
int areaR()
{
    int l = 10;
    int b = 5;
    int rarea = l * b; 
    if (l && b > 0)
    {
        return rarea;
    }
    else
    {
        printf("Area dosnt exist");
        return -1;
    }
}

// perimeter of rectangle
// perimeter of R : P=(L*W)*2
int periR()
{
    int rperi, w = 4;
    int l = 10;
    rperi = (l * w) * 2;
    if (l && w > 0)
    {
        return rperi;
    }
}

// perimeter of Circle : P=2*3.14*r
// A of Circle +3.14 * r*r
int areaC()
{
    int r = 5;
    int carea = 3.14 * r * r;

    if (r > 0)
    {
        return carea;
    }
    else
    {
        printf("\nRadius is invalid");
        return -1;
    }
}
// Perimeter of c
int periC()
{
    int r = 5;
    int cperi = 2 * 3.14 * r;
    if (r > 0)
    {
        return cperi;
    }
    else
    {
        printf("\nRadius is invalid");
        return -1;
    }
}
