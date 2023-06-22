#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

struct LogEntry {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
};

void readData(struct LogEntry entries[], int *count) {
    FILE *file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Failed to open data.csv file.\n");
        exit(1);
    }

    char line[100];
    char *token;
    fgets(line, sizeof(line), file);  // Skip header line

    while (fgets(line, sizeof(line), file)) {
        token = strtok(line, ",");
        entries[*count].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(entries[*count].sensorNo, token);

        token = strtok(NULL, ",");
        entries[*count].temperature = atof(token);

        token = strtok(NULL, ",");
        entries[*count].humidity = atoi(token);

        token = strtok(NULL, ",");
        entries[*count].light = atoi(token);

        token = strtok(NULL, ",");
        token[strcspn(token, "\n")] = '\0';  // Remove newline character
        strcpy(entries[*count].timestamp, token);

        (*count)++;
    }

    fclose(file);
}

void printData(struct LogEntry entries[], int count) {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t\t%.1f\t\t%d\t\t%d\t%s\n", entries[i].entryNo, entries[i].sensorNo,
               entries[i].temperature, entries[i].humidity, entries[i].light, entries[i].timestamp);
    }
}

int main() {
    struct LogEntry entries[MAX_ENTRIES];
    int count = 0;

    readData(entries, &count);
    printData(entries, count);

    return 0;
}
