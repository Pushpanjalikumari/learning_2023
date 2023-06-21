#include <stdio.h>

char getGrade(int score) {
    char grade;
    
    switch (score) {
        case 90 ... 100:
            grade = 'A';
            break;
        case 75 ... 89:
            grade = 'B';
            break;
        case 60 ... 74:
            grade = 'C';
            break;
        case 50 ... 59:
            grade = 'D';
            break;
        case 36 ... 49:
            grade = 'E';
            break;
        case 0 ... 35:
            grade = 'F';
            break;
        default:
            grade = 'X'; 
    }
    
    return grade;
}

int main() {
    int scores[] = {65, 66, 67, 68, 69, 70};
    int numScores = sizeof(scores) / sizeof(scores[0]);
    
    for (int i = 0; i < numScores; i++) {
        int score = scores[i];
        char grade = getGrade(score);
        printf("Score: %d -> Grade %c\n", score, grade);
    }
    
    return 0;
}