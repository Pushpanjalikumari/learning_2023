#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    float grade;
} Student;

Student* addStudent(Student* students, int* numStudents, const char* name, int age, float grade) {
    
    *numStudents += 1;
    students = realloc(students, sizeof(Student) * (*numStudents));
    if (students == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        exit(1);
    }

    strcpy(students[*numStudents - 1].name, name);
    students[*numStudents - 1].age = age;
    students[*numStudents - 1].grade = grade;

    return students;
}

int main() {
    int numStudents = 2;
    Student* students = malloc(sizeof(Student) * numStudents);
    if (students == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    strcpy(students[0].name, "Anjali");
    students[0].age = 20;
    students[0].grade = 80.5;

    strcpy(students[1].name, "Anuja");
    students[1].age = 19;
    students[1].grade = 95.0;

    const char* newName = "Anushka";
    int newAge = 21;
    float newGrade = 75.3;
    students = addStudent(students, &numStudents, newName, newAge, newGrade);


    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Grade: %.2f\n", students[i].grade);
        printf("\n");
    }

  
    free(students);

    return 0;
}
