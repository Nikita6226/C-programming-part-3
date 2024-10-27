// Print numbers from 1 to 10
// memory dia
#include <stdio.h>

int printNumber(int n);

void main() {
    int i = 1;
    for (i = 1; i <= 10; i++) {
        int result = printNumber(i);
        printf("%d\n", result);
    }
}

int printNumber(int n) {
    return n;
}
