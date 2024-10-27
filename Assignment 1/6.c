// Write a program to check if person is eligible to marry or not (male age >= 21 and female age >= 18).

#include <stdio.h>
int eligibleToMarry();
void main()
{
    int eligiblity = eligibleToMarry();
    if (eligiblity == 1)
        printf("Female or Male is eligible to marry");
    else if (eligiblity == 2)
        printf("Female eligible to marry !!");
    else
        printf("Not eligible to marry !!");
}
int eligibleToMarry()
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);

    if (age >= 18 && age >= 21)
        return 1;
    else if (age >= 18)
        return 2;
    else
        return 0;
}
