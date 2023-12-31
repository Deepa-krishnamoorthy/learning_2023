#include <stdio.h>
#include <string.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};
void initializeStudents(struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar(); // Clearing the newline character from the input buffer

    // Dynamically allocate memory for the array of structures
    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize all members in the array of structures
    initializeStudents(students, numStudents);
    printf("\n--- Student Details ---\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
    free(students);
    return 0;
}
