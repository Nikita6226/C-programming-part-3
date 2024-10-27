// Print table for the given munber
#include <stdio.h>

int calculateProduct(int num, int multiplier);

void main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        int result = calculateProduct(num, i);
        printf("%d\n", result);
    }
}

int calculateProduct(int num, int multiplier) {
    return num * multiplier;
}
