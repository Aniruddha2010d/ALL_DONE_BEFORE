#include <stdio.h>
int main() {
    int num, originalNum, remainder, temp, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        temp /= 10;
        i *= 10;
    };
    i /= 10;
    if (num == i) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    };
    return 0;
}
