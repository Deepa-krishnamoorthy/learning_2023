#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};
int compareStudents(const void* a, const void* b) {
    const struct Student* studentA = (const struct Student*)a;
    const struct Student* studentB = (const struct Student*)b;

    if (studentA->marks > studentB->marks) {
        return -1;
    } else if (studentA->marks < studentB->marks) {
        return 1;
    } else {
        return 0;
    }
}

void sortStudents(struct Student* students, int numStudents) {
    qsort(students, numStudents, sizeof(struct Student), compareStudents);
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar(); 
    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    sortStudents(students, numStudents);
    printf("\n--- Sorted Student Details ---\n");

    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
    free(students);

    return 0;
}
