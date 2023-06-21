#include <stdio.h>
void swap(void* a, void* b, size_t size) {
    char* p = (char*) a;
    char* q = (char*) b;
    char temp;
    size_t i;
    
    for (i = 0; i < size; ++i) {
        temp = p[i];
        p[i] = q[i];
        q[i] = temp;
    }
}
int main() {
    int x = 5, y = 10;
    float a = 2.5, b = 7.8;
    char c1 = 'A', c2 = 'B';
    // Swap two integers
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y, sizeof(int));
    printf("After swap: x = %d, y = %d\n", x, y);
    // Swap two floats
    printf("Before swap: a = %.2f, b = %.2f\n", a, b);
    swap(&a, &b, sizeof(float));
    printf("After swap: a = %.2f, b = %.2f\n", a, b);
    // Swap two characters
    printf("Before swap: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swap: c1 = %c, c2 = %c\n", c1, c2);
    return 0;
}
