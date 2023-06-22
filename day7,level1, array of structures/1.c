#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseInputString(const char* inputString, struct Student* students, int numStudents) {
    const char* delimiter = " ";
    char* token = strtok((char*)inputString, delimiter);
    int count = 0;

    while (token != NULL && count < numStudents) {
        students[count].rollno = atoi(token);

        token = strtok(NULL, delimiter);
        if (token == NULL) break;

        strncpy(students[count].name, token, sizeof(students[count].name) - 1);
        students[count].name[sizeof(students[count].name) - 1] = '\0';

        token = strtok(NULL, delimiter);
        if (token == NULL) break;

        students[count].marks = atof(token);

        token = strtok(NULL, delimiter);
        count++;
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar(); 

    struct Student* students = malloc(numStudents * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the input string: ");
    char inputString[100];
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; 

    parseInputString(inputString, students, numStudents);

  
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    free(students);
    return 0;
}
