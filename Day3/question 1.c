#include <stdio.h>
void printNumbers(int n) {
    for (int i = 1; i <= n; ++i) {
        printf("%d", i);
    }
}
// Function to print spaces in between
void printSpaces(int n) {
    for (int i = 1; i <= 2 * (n - 1); ++i) {
        printf(" ");
    }
}
// Function to print numbers from n to 1
void printReverseNumbers(int n) {
    for (int i = n; i >= 1; --i) {
        printf("%d", i);
    }
}

int main() {
    int n = 5;

    // Loop to print the pattern
    for (int i = n; i >= 1; --i) {
        printNumbers(i);
        printSpaces(n - i + 1);
        printReverseNumbers(i);
        printf("\n");
    }

    return 0;
}
