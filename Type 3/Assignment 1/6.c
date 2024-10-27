// Write a program to check if person is eligible to marry or not (male age >= 21 and female age >= 18).

#include <stdio.h>
void eligibleToMarry(int age);
void main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);

    eligibleToMarry(age);
}
void eligibleToMarry(int age)
{
    if (age >= 21)
    {
        printf("Male is eligible to marry.\n");
    }
    else if (age >= 18)
    {
        printf("Female is eligible to marry.\n");
    }
    else
    {
        printf("Not eligible to marry.\n");
    }
}
