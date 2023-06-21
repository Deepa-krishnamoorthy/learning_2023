#include <stdio.h>

void printExponent(double x) {
    unsigned long long* p = (unsigned long long*) &x;

    unsigned long long exponent = (*p >> 52) & 0x7FF;

    // Convert the exponent to hexadecimal and binary format
    printf("Hexadecimal: 0x%03llX\n", exponent);
    
    printf("Binary: 0b");
    for (int i = 10; i >= 0; --i) {
        printf("%lld", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
