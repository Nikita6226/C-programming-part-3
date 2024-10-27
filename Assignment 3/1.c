// Print numbers from 1 to 10
// memory dia
#include <stdio.h>

int printNumber(); // Function declaration

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        int result = printNumber(i);
        printf("%d\n", result);
    }
    return 0;
}

int printNumber(int num) { // Function definition
    return num;
}