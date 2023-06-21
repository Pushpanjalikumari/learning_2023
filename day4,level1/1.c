#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box box) {
    return box.length * box.width * box.height;
}

double calculateSurfaceArea(struct Box box) {
    return 2 * (box.length * box.width + box.length * box.height + box.width * box.height);
}

int main() {
    struct Box box;
    struct Box *boxPtr;

    box.length = 5.0;
    box.width = 3.0;
    box.height = 4.0;

    boxPtr = &box;

    
    printf("Volume (using indirection operator): %.2f\n", (*boxPtr).length * (*boxPtr).width * (*boxPtr).height);
    printf("Surface Area (using indirection operator): %.2f\n", 2 * ((*boxPtr).length * (*boxPtr).width + (*boxPtr).length * (*boxPtr).height + (*boxPtr).width * (*boxPtr).height));

    
    printf("Volume (using arrow operator): %.2f\n", boxPtr->length * boxPtr->width * boxPtr->height);
    printf("Surface Area (using arrow operator): %.2f\n", 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height));

    return 0;
}
            if (digit < smallestDigit)
                smallestDigit = digit;
            if (digit > largestDigit)
                largestDigit = digit;
            temp /= 10;
        }
    }

    va_end(args);

    if (smallestDigit == INT_MAX || largestDigit == INT_MIN)
        printf("Not Valid\n");
    else
        printf("Smallest digit: %d\nLargest digit: %d\n", smallestDigit, largestDigit);
}

int main() {
    findSmallestAndLargestDigits(3, 8, 156, 123450);

    return 0;
}