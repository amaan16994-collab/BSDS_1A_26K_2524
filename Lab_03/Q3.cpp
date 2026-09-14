#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;
    
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height (in feet or meters): ");
    scanf("%f", &height);

    printf("Enter grade (A, B, C, etc.): ");
    scanf(" %c", &grade);

    printf("Age   : %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade : %c\n", grade);
    return 0;
}
