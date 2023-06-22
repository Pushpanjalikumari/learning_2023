#include <stdio.h>


struct Student {
    char name[50];
    int marks;
};


void displayMembers(struct Student arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Marks: %d\n", arr[i].name, arr[i].marks);
    }
}

int main() {
    struct Student students[] = {
        {"Amrit", 85},
        {"Ampu", 93},
        {"Bebo", 70},
        {"kartik", 80},
        {"Neha", 60}
    };

    int size = sizeof(students) / sizeof(students[0]);

    displayMembers(students, size);

    return 0;
}
