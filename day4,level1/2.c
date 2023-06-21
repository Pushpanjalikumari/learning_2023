#include <stdio.h>


struct Complex {
    float real;
    float imaginary;
};

struct Complex readComplexNumber() {
    struct Complex c;

    printf("Enter real part: ");
    scanf("%f", &c.real);

    printf("Enter imaginary part: ");
    scanf("%f", &c.imaginary);

    return c;
}

void writeComplexNumber(struct Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imaginary);
}


struct Complex addComplexNumbers(struct Complex c1, struct Complex c2) {
    struct Complex result;

    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;

    return result;
}


struct Complex multiplyComplexNumbers(struct Complex c1, struct Complex c2) {
    struct Complex result;

    result.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    result.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;

    return result;
}

int main() {
    struct Complex complex1, complex2, sum, product;

    printf("Enter details for complex number 1:\n");
    complex1 = readComplexNumber();

    printf("Enter details for complex number 2:\n");
    complex2 = readComplexNumber();

    printf("\n");

    printf("Complex number 1:\n");
    writeComplexNumber(complex1);

    printf("Complex number 2:\n");
    writeComplexNumber(complex2);

    printf("\n");

    sum = addComplexNumbers(complex1, complex2);
    printf("Sum of the complex numbers:\n");
    writeComplexNumber(sum);

    product = multiplyComplexNumbers(complex1, complex2);
    printf("Product of the complex numbers:\n");
    writeComplexNumber(product);

    return 0;
}