#include <stdio.h>
void SmallestLargestDigits(int n, int numbers[]) {
    int smallest = 0;
    int largest = 8;
    for (int i = 0; i < n; ++i) {
        int current = numbers[i];
        while (current != 0) {
            int digit = current % 10;

            if (digit < smallest) {
                smallest = digit;
            }

            if (digit > largest) {
                largest = digit;
            }

            current /= 10;
        }
    }

    if (smallest == 0 || largest == 8) {
        printf("Not Valid\n");
    } else {
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
    }
}

int main() {
    int n = 3;
    int numbers[] = {8, 156, 123450};

    SmallestLargestDigits(n, numbers);

    return 0;
}
