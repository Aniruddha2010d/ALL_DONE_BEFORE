#include <stdio.h>
#include <stdlib.h>

int lastman1(int arr[], int len);
int lastman2(int arr[], int len);

int main() {
    int num;
    printf("Type the number of persons: ");
    if (scanf("%d", &num) != 1 || num <= 0) return 1;

    // Using standard dynamic allocation to prevent stack overflow for medium inputs
    int *arr = malloc(num * sizeof(int));
    for (int i = 0; i < num; i++) {
        arr[i] = i + 1;
    }

    int winner;
    if (num % 2 == 0) {
        winner = lastman1(arr, num);
    } else {
        winner = lastman2(arr, num);
    }

    printf("The last man is %d th one\n", winner);
    free(arr);
    return 0;
}

int lastman1(int arr[], int len) {
    if (len == 2 && arr[0] == 0) {
        return arr[1];
    }
    if (len == 1) {
        return arr[0];
    }

    for (int i = 1; i < len; i += 2) {
        arr[i] = 0;
    }

    // Safely calculate new length
    int new_len = len - (len / 2);
    int *newarr = malloc(new_len * sizeof(int));
    int b = 0;

    for (int i = 0; i < len; i++) {
        if (arr[i] != 0) {
            newarr[b++] = arr[i];
        }
    }

    int result;
    if (b % 2 == 0) {
        result = lastman1(newarr, b);
    } else {
        result = lastman2(newarr, b);
    }

    free(newarr);
    return result; // FIXED: Added missing return
}

int lastman2(int arr[], int len) {
    if (len == 1) {
        return arr[0];
    }

    for (int i = 1; i < len; i += 2) {
        arr[i] = 0;
    }

    int new_len = len - (len / 2) + 1;
    int *newarr = malloc(new_len * sizeof(int));
    newarr[0] = 0;
    int b = 1;

    for (int i = 0; i < len; i++) {
        if (arr[i] != 0) {
            newarr[b++] = arr[i];
        }
    }

    int result;
    if (b % 2 == 0) {
        result = lastman1(newarr, b);
    } else {
        result = lastman2(newarr, b);
    }

    free(newarr);
    return result;
}
