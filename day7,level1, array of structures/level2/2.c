#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[20];
} Member;

void deleteMemberAtStart(Member** array, int* size) {
    if (*size == 0) {
        printf("Array is empty. Cannot delete member.\n");
        return;
    }

    
    Member* newArray = (Member*)malloc((*size - 1) * sizeof(Member));
    if (newArray == NULL) {
        printf("Memory allocation failed. Unable to delete member.\n");
        return;
    }

    for (int i = 1; i < *size; i++) {
        newArray[i - 1] = (*array)[i];
    }

    free(*array); 
    *array = newArray;  
    (*size)--;  

    printf("Member at the start of the array has been deleted.\n");
}

int main() {
    Member* array = (Member*)malloc(3 * sizeof(Member));  
    int size = 3;

    
    array[0].id = 1;
    strcpy(array[0].name, "John");
    array[1].id = 2;
    strcpy(array[1].name, "Alice");
    array[2].id = 3;
    strcpy(array[2].name, "Bob");

    printf("Before deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("Member ID: %d, Name: %s\n", array[i].id, array[i].name);
    }

    deleteMemberAtStart(&array, &size);

    printf("After deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("Member ID: %d, Name: %s\n", array[i].id, array[i].name);
    }

    free(array);  

    return 0;
}
