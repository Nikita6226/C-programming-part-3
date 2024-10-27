//Prime

#include<stdio.h>
void rangePrime(int lower, int upper);
void main()
{
    int lower, upper;
     printf("Enter lower range: ");
    scanf("%d",&lower);
    printf("Enter upper range: ");
    scanf("%d",&upper);

    rangePrime(lower, upper);
}
void rangePrime(int lower, int upper)
{
    int i,j, isPrime;
    printf("Prime number between %d to %d are: ", lower, upper);

    for(i=lower; i<=upper; i++)
    {
        if(i<2)
        {
            continue;
        }
        isPrime=1;
        for(j=2; j<=i/2;j++)
        {
            if(i%j==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime==1)
        {
            printf("%d ",i);
        }
    }
}