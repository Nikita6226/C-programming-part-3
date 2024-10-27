// Print table for the given munber
#include <stdio.h>

int table(); // Function declaration

int main() {
    int num = table(); // Call the function and get the number
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", num * i);
    }
    return 0;
}

int table() { // Function definition
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    return num; // Return the number entered by the user
}
