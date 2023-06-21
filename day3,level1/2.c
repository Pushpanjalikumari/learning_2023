#include <stdio.h>

void printBits(unsigned int num) {
    int bits = sizeof(num) * 8;  // Number of bits in the integer

    for (int i = bits - 1; i >= 0; i--) {
        unsigned int mask = 1 << i;
        printf("%d", (num & mask) ? 1 : 0);
    }

    printf("\n");
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Binary representation: ");
    printBits(num);

    return 0;
}