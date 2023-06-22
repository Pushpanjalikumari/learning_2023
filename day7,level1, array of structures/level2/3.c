#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    int age;
} Person;

void swapPeople(Person* people, int index1, int index2) {
    Person temp = people[index1];
    people[index1] = people[index2];
    people[index2] = temp;
}

int main() {
    Person people[5] = {
        {1, "Pankaj", 20},
        {2, "Smriti", 35},
        {3, "kavita", 32},
        {4, "Sapna", 26},
        {5, "Suman", 25}
    };

    int index1, index2;
    printf("Enter the indexes of the two members to swap (0-4): ");
    scanf("%d %d", &index1, &index2);

    if (index1 < 0 || index1 >= 5 || index2 < 0 || index2 >= 5) {
        printf("Invalid indexes entered.\n");
        return 1;
    }

    printf("Before swapping:\n");
    printf("Person %d: %s, %d years old\n", people[index1].id, people[index1].name, people[index1].age);
    printf("Person %d: %s, %d years old\n", people[index2].id, people[index2].name, people[index2].age);

    swapPeople(people, index1, index2);

    printf("\nAfter swapping:\n");
    printf("Person %d: %s, %d years old\n", people[index1].id, people[index1].name, people[index1].age);
    printf("Person %d: %s, %d years old\n", people[index2].id, people[index2].name, people[index2].age);

    return 0;
}

