#include <stdio.h>
#include <limits.h>

void findSmallestAndLargestDigits(int n, ...) {
    int smallestDigit = INT_MAX;
    int largestDigit = INT_MIN;

    va_list args;
    va_start(args, n);

    for (int i = 0; i < n; i++) {
        int num = va_arg(args, int);
        int temp = num;

        while (temp != 0) {
            int digit = temp % 10;