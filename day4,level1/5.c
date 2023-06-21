#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

void swapFields(struct Student *s1, struct Student *s2) {
    struct Student temp;

    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main() {
    struct Student student1, student2;

    printf("Enter details for student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &student1.age);
    printf("Marks: ");
    scanf("%f", &student1.marks);

    printf("\nEnter details for student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &student2.age);
    printf("Marks: ");
    scanf("%f", &student2.marks);

    printf("\nBefore swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);

    printf("\nStudent 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Marks: %.2f\n", student2.marks);

    swapFields(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);

    printf("\nStudent 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Marks: %.2f\n", student2.marks);

    return 0;
}
