#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

void swap(struct Student* a, struct Student* b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

void sortDescending(struct Student arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j].marks > arr[maxIndex].marks) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            swap(&arr[i], &arr[maxIndex]);
        }
    }
}

void printArray(struct Student arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Marks: %d\n", arr[i].name, arr[i].marks);
    }
}

int main() {
    struct Student students[] = {
        {"Amrit", 85},
        {"Pushpa", 90},
        {"Anjali", 75},
        {"Sakshi", 82},
        {"prashant", 97}
    };

    int size = sizeof(students) / sizeof(students[0]);

    printf("Before sorting:\n");
    printArray(students, size);

    sortDescending(students, size);

    printf("\nAfter sorting in descending order:\n");
    printArray(students, size);

    return 0;
}
