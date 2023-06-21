#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ENTRIES 100
#define MAX_LENGTH 50
typedef struct {
    int entryNo;
    char sensorNo[MAX_LENGTH];
    float temperature;
    int humidity;
    int light;
    char time[MAX_LENGTH];
} LogEntry;
void extractData(LogEntry entries[], int *count) {
    FILE *file;
    char line[MAX_LENGTH];
    char *token;
    file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        exit(1);
    }
    *count = 0;
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
        strcpy(entries[*count].time, token);
        (*count)++;
    }
    fclose(file);
}
void displayData(LogEntry entries[], int count) {
    int i;
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTime\n");
    for (i = 0; i < count; i++) {
        printf("%d\t%s\t\t%.1f\t\t%d\t\t%d\t%s\n",
            entries[i].entryNo,
            entries[i].sensorNo,
            entries[i].temperature,
            entries[i].humidity,
            entries[i].light,
            entries[i].time
        );
    }
}

int main() {
    LogEntry entries[MAX_ENTRIES];
    int count;

    extractData(entries, &count);
    displayData(entries, count);

    return 0;
}
