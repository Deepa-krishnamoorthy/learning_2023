#include <stdio.h>
struct Person {
    char name[50];
    int age;
};
void swapFields(struct Person* p1, struct Person* p2) {
    struct Person temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    struct Person person1, person2;
    
    printf("Enter the name of person 1: ");
    scanf("%s", person1.name);
    
    printf("Enter the age of person 1: ");
    scanf("%d", &person1.age);
    
    printf("Enter the name of person 2: ");
    scanf("%s", person2.name);
    
    printf("Enter the age of person 2: ");
    scanf("%d", &person2.age);
    
    printf("\nBefore swapping:\n");
    printf("Person 1: %s, %d years old\n", person1.name, person1.age);
    printf("Person 2: %s, %d years old\n", person2.name, person2.age);
    swapFields(&person1, &person2);
    
    printf("\nAfter swapping:\n");
    printf("Person 1: %s, %d years old\n", person1.name, person1.age);
    printf("Person 2: %s, %d years old\n", person2.name, person2.age);
    
    return 0;
}
