//Strong no

//Check Strong number in the given range.

#include<stdio.h>
void rangeOfStrong(int lower, int upper);
void main()
{
    int lower, upper;
    printf("Enter the lower limit: ");
    scanf("%d",&lower);
    printf("Enter the upper limit: ");
    scanf("%d",&upper);

    rangeOfStrong(lower, upper);
}
void rangeOfStrong(int lower, int upper)
{
    printf("Strong number between %d and %d are: ",lower, upper);

    for(int num=lower; num<=upper; num++) 
    {
        int originalNum=num;
        int sum=0;

        while(originalNum>0)
        {
            int rem= originalNum%10;

            int fact=1;
            for(int i=1;i<=rem; i++)
            {
                fact*= i;
            }
            sum+=fact;
            originalNum/=10;
        }
        if(sum==num)
        {
            printf("%d ",num);
        }
    }
}