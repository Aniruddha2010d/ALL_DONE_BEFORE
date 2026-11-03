#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Type the number: ");
    scanf("%d", &num);
    int x = 10; // Start from the rightmost digit
    int dig[10]; // Adjusted array size for 10 digits
    while (x >= 1) {
        dig[x - 1] = num % x; // Store the digit at the current position
        num = num / x; // Remove the digit from the number
        x--;
    }
    int num2 = 0;
    for (int i = 0; i < 10; i++) {
        num2 = num2 + dig[i] * dig[i] * dig[i]; // Compute the sum of cubes of digits
    }
    if (num2 == num) {
        printf("The number is an Armstrong number.");
    } else {
        printf("The number is not an Armstrong number.");
    }
    return 0;
}

