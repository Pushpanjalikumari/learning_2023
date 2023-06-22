#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    float grade;
} Student;

Student students[MAX_STUDENTS];

Student* searchStudentByName(const char* name, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return &students[i];
        }
    }

    return NULL; 
}

int main() {
    
    strcpy(students[0].name, "Pushpa");
    students[0].age = 23;
    students[0].grade = 87.5;

    strcpy(students[1].name, "Purrusotom");
    students[1].age = 21;
    students[1].grade = 94.0;

    const char* searchName = "Purrusotom";
    Student* foundStudent = searchStudentByName(searchName, 2);

    if (foundStudent != NULL) {
        printf("Student found!\n");
        printf("Name: %s\n", foundStudent->name);
        printf("Age: %d\n", foundStudent->age);
        printf("Grade: %.2f\n", foundStudent->grade);
    } else {
        printf("Student not found.\n");
    }

    return 0;
}
