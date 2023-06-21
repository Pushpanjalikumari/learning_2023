#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    char* p1 = (char*)a;
    char* p2 = (char*)b;
    
    while (size--) {
        char temp = *p1;
        *p1++ = *p2;
        *p2++ = temp;
    }
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2, sizeof(int));
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    char ch1 = 'A', ch2 = 'B';
    printf("Before swap: ch1 = %c, ch2 = %c\n", ch1, ch2);
    swap(&ch1, &ch2, sizeof(char));
    printf("After swap: ch1 = %c, ch2 = %c\n", ch1, ch2);

    double dbl1 = 3.14, dbl2 = 2.718;
    printf("Before swap: dbl1 = %f, dbl2 = %f\n", dbl1, dbl2);
    swap(&dbl1, &dbl2, sizeof(double));
    printf("After swap: dbl1 = %f, dbl2 = %f\n", dbl1, dbl2);

    return 0;
}