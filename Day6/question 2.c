#include <stdio.h>
struct Complex {
    double real;
    double imaginary;
};
struct Complex readComplex() {
    struct Complex num;
    
    printf("Enter the real part: ");
    scanf("%lf", &num.real);
    
    printf("Enter the imaginary part: ");
    scanf("%lf", &num.imaginary);
    
    return num;
}
void writeComplex(struct Complex num) {
    printf("Complex number: %.2f + %.2fi\n", num.real, num.imaginary);
}
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    
    return result;
}
struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    
    result.real = num1.real * num2.real - num1.imaginary * num2.imaginary;
    result.imaginary = num1.real * num2.imaginary + num1.imaginary * num2.real;
    
    return result;
}

int main() {
    struct Complex complex1, complex2, sum, product;
    
    printf("Enter the first complex number:\n");
    complex1 = readComplex();
    
    printf("Enter the second complex number:\n");
    complex2 = readComplex();
    
    printf("\n");
    
    printf("First complex number:\n");
    writeComplex(complex1);
    
    printf("Second complex number:\n");
    writeComplex(complex2);
    
    printf("\n");
    
    sum = addComplex(complex1, complex2);
    printf("Sum of the two complex numbers:\n");
    writeComplex(sum);
    
    product = multiplyComplex(complex1, complex2);
    printf("Product of the two complex numbers:\n");
    writeComplex(product);
    
    return 0;
}
