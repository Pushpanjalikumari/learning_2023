#include <stdio.h>

int findCharacterType(char ch) {
    if (isupper(ch)) {
        return 1;  
    } else if (islower(ch)) {
        return 2;  
    } else if (isdigit(ch)) {
        return 3; 
    } else if (isprint(ch)) {
        return 4;  
    } else {
        return 5;  
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    int type = findCharacterType(ch);
    printf("Type: %d\n", type);

    return 0;
}