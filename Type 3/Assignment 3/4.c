// check if number is prime or not.
#include <stdio.h>

void checkPrime(int num);

void main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    checkPrime(num);
}

void checkPrime(int num) {
    int isPrime = 1;

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("Number is a Prime!\n");
    } else {
        printf("Number is not a Prime!\n");
    }
}
