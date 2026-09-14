#include <stdio.h>

int main() {
    char name[50];
    int age;
    float height;
    char grade;
    float cgpa;

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height: ");
    scanf("%f", &height);

    printf("Enter grade: ");
    scanf(" %c", &grade); 

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("\n========== STUDENT REPORT ==========\n\n");
    printf("Name   : %s", name);
    printf("Age    : %d\n", age);
    printf("Height : %.2f\n", height);
    printf("Grade  : %c\n", grade);
    printf("CGPA   : %.2f\n", cgpa);

    return 0;
}
