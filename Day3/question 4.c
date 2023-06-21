#include <stdio.h>
#include <math.h>
int findLargestNumber(int num) {
    int largest = 0;
    for (int i = 0; i < 4; ++i) {
        int current = num / (int)pow(10, i + 1) * (int)pow(10, i) + num % (int)pow(10, i);
        if (current > largest) {
            largest = current;
        }
    }

    return largest;
}

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largest = findLargestNumber(number);

    printf("Largest number by deleting a single digit: %d\n", largest);

    return 0;
}
