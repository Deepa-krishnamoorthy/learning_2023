#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

// Function to parse the string and initialize the array of structures
void parseString(char* inputString, struct Student* students, int numStudents) {
    char* token;
    int i = 0;
    
    // Tokenize the string based on whitespace
    token = strtok(inputString, " ");
    
    while (token != NULL && i < numStudents) {
        // Extract the rollno, name, and marks from the tokenized string
        students[i].rollno = atoi(token);
        
        token = strtok(NULL, " ");
        strcpy(students[i].name, token);
        
        token = strtok(NULL, " ");
        students[i].marks = atof(token);
        
        token = strtok(NULL, " ");
        i++;
    }
}

int main() {
    int numStudents;
    char inputString[100];
    
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar(); // Clearing the newline character from the input buffer
    
    printf("Enter the student details in the format 'rollno name marks':\n");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; // Removing the trailing newline character
    
    // Dynamically allocate memory for the array of structures
    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));
    
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Parse the input string and initialize the array of structures
    parseString(inputString, students, numStudents);
    
    // Display the initialized array of structures
    printf("\n--- Student Details ---\n");
    
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
    
    // Free the dynamically allocated memory
    free(students);
    
    return 0;
}
