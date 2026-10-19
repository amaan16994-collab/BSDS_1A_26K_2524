#include <stdio.h>

int main() {
   
    char student_names[3][50];

 
    int marks[3][3];
    
    // Array to store the calculated averages
    float averages[3];

    printf("=== Student Registration and Marks Entry System ===\n\n");

    // Input loop for students
    for (int i = 0; i < 3; i++) {
        
        printf("Enter full name for student %d: ", i + 1);
        scanf(" %[^\n]", student_names[i]);

        // Use Nested Loops to input 3 subject marks for each student
        printf("Enter marks for 3 subjects for %s:\n", student_names[i]);
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            printf("  - Subject %d marks: ", j + 1);
            scanf("%d", &marks[i][j]);
            sum += marks[i][j];
        }

        // Calculate average marks for the current student
        averages[i] = (float)sum / 3.0;
        printf("\n");
    }

    // Display a formatted report
    printf("\n=========================================\n");
    printf("         STUDENT PERFORMANCE REPORT      \n");
    printf("=========================================\n");
    printf("%-30s | %-15s\n", "Student Full Name", "Average Marks");
    printf("-----------------------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("%-30s | %-15.2f\n", student_names[i], averages[i]);
    }
    printf("=========================================\n");

    return 0;
}
